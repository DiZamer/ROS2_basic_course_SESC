#!/usr/bin/env bash
#
# build_slides.sh — сборка Marp-презентаций (*.md) в PDF и PPTX без ИИ-агента.
#
# Примеры:
#   ./build_slides.sh lecture_08_node.md
#   ./build_slides.sh lecture_01_ubuntu.md lecture_09_topic.md
#   ./build_slides.sh --since 2026-09-15 --until 2026-09-18
#   ./build_slides.sh --all
#
# Полное описание: README_pdf_pptx.md

set -u -o pipefail

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
CONFIG="$SCRIPT_DIR/marp.config.js"

DIR="$SCRIPT_DIR"
OUT_DIR=""
FORMATS="pdf,pptx,editable"
SINCE=""
UNTIL=""
CHROME_ARG=""
WITH_SANDBOX=0
FORCE=0
DRY_RUN=0
QUIET=0
FILES=()

usage() {
  cat <<'EOF'
build_slides.sh — сборка Marp-презентаций (*.md) в PDF и PPTX.

Использование:
  build_slides.sh [ОПЦИИ] [FILE.md ...]

Режимы (если ничего не задано — как --all):
  FILE.md ...                    один или несколько перечисленных файлов
  --since DATE [--until DATE]    файлы, изменённые в указанный период (mtime)
  --all                          все Marp-файлы в папке --dir

Опции:
  -d, --dir DIR                  папка поиска (по умолчанию: папка скрипта)
  -o, --out DIR                  папка вывода (по умолчанию: рядом с каждым .md)
  -f, --format LIST              pdf,pptx,editable или all (по умолчанию: все)
      --since DATE               начало периода включительно (YYYY-MM-DD[ HH:MM[:SS]])
      --until DATE               конец периода включительно (для даты — до 23:59:59)
      --chrome PATH              путь к Chrome/Chromium (иначе автопоиск)
      --with-sandbox             не выставлять CHROME_NO_SANDBOX=1
      --force                    конвертировать даже без "marp: true"
  -n, --dry-run                  показать план, ничего не создавать
  -q, --quiet                    меньше вывода
  -h, --help                     эта справка

Форматы:
  pdf        слайды в PDF
  pptx       PowerPoint, каждый слайд — изображение
  editable   PowerPoint с редактируемым текстом (экспериментально, через LibreOffice)

Коды выхода: 0 — успех, 1 — ошибка аргументов, 2 — нет инструментов, 3 — частичные сбои.
EOF
}

info()      { [ "$QUIET" -eq 1 ] || printf '%s\n' "$*"; }
warn()      { printf 'ПРЕДУПРЕЖДЕНИЕ: %s\n' "$*" >&2; }
die()       { printf 'Ошибка: %s\n' "$*" >&2; exit 1; }
die_tools() { printf 'Ошибка: %s\n' "$*" >&2; exit 2; }

need_val() {
  [ "$#" -ge 2 ] || die "опция $1 требует значение"
}

# ---------- разбор аргументов ----------
while [ "$#" -gt 0 ]; do
  case "$1" in
    -d|--dir)      need_val "$@"; DIR="$2"; shift 2 ;;
    -o|--out)      need_val "$@"; OUT_DIR="$2"; shift 2 ;;
    -f|--format)   need_val "$@"; FORMATS="$2"; shift 2 ;;
    --all)         shift ;;
    --since)       need_val "$@"; SINCE="$2"; shift 2 ;;
    --until)       need_val "$@"; UNTIL="$2"; shift 2 ;;
    --chrome)      need_val "$@"; CHROME_ARG="$2"; shift 2 ;;
    --with-sandbox) WITH_SANDBOX=1; shift ;;
    --force)       FORCE=1; shift ;;
    -n|--dry-run)  DRY_RUN=1; shift ;;
    -q|--quiet)    QUIET=1; shift ;;
    -h|--help)     usage; exit 0 ;;
    --)            shift; while [ "$#" -gt 0 ]; do FILES+=("$1"); shift; done ;;
    -*)            die "неизвестная опция: $1 (см. --help)" ;;
    *)             FILES+=("$1"); shift ;;
  esac
done

# ---------- проверка форматов ----------
SELECTED=()
parse_formats() {
  local raw="$1" part
  local IFS=','
  for part in $raw; do
    part="${part// /}"
    case "$part" in
      "") ;;
      all)       SELECTED=(pdf pptx editable) ;;
      pdf)       SELECTED+=(pdf) ;;
      pptx)      SELECTED+=(pptx) ;;
      editable)  SELECTED+=(editable) ;;
      *)         die "неизвестный формат: $part (доступно: pdf, pptx, editable, all)" ;;
    esac
  done
  [ "${#SELECTED[@]}" -gt 0 ] || die "не задан ни один формат"
}
parse_formats "$FORMATS"

# убрать дубликаты, сохранить порядок
_uniq=()
for x in "${SELECTED[@]}"; do
  for y in "${_uniq[@]:-}"; do [ "$x" = "$y" ] && continue 2; done
  _uniq+=("$x")
done
SELECTED=("${_uniq[@]}")
unset _uniq x y

# ---------- проверка дат ----------
DATE_RE='^[0-9]{4}-[0-9]{2}-[0-9]{2}([ T][0-9]{2}:[0-9]{2}(:[0-9]{2})?)?$'
if [ -n "$SINCE" ] && ! printf '%s' "$SINCE" | grep -qE "$DATE_RE"; then
  die "--since: ожидается YYYY-MM-DD[ HH:MM[:SS]], получено \"$SINCE\""
fi
if [ -n "$UNTIL" ] && ! printf '%s' "$UNTIL" | grep -qE "$DATE_RE"; then
  die "--until: ожидается YYYY-MM-DD[ HH:MM[:SS]], получено \"$UNTIL\""
fi

# ---------- поиск инструментов ----------
MARP=()
resolve_marp() {
  local m
  if m="$(command -v marp 2>/dev/null)" && [ -n "$m" ]; then
    MARP=("$m"); return 0
  fi
  m="$(ls -1 "$HOME"/.nvm/versions/node/*/bin/marp 2>/dev/null | sort -V | tail -1)"
  if [ -n "$m" ] && command -v node >/dev/null 2>&1; then
    MARP=(node "$m"); return 0
  fi
  return 1
}

resolve_chrome() {
  local p c
  for p in "$CHROME_ARG" "${CHROME_PATH:-}" "${BROWSER_PATH:-}"; do
    [ -n "$p" ] && [ -x "$p" ] && { printf '%s\n' "$p"; return 0; }
  done
  p="$(find "$HOME/.cache/puppeteer/chrome" -maxdepth 3 -type f -name chrome -path '*/chrome-linux64/*' 2>/dev/null | sort -V | tail -1)"
  [ -n "$p" ] && { printf '%s\n' "$p"; return 0; }
  for c in google-chrome google-chrome-stable chromium chromium-browser microsoft-edge microsoft-edge-stable; do
    p="$(command -v "$c" 2>/dev/null)" && [ -n "$p" ] && { printf '%s\n' "$p"; return 0; }
  done
  return 1
}

# ---------- отбор файлов ----------
collect_files() {
  if [ "${#FILES[@]}" -gt 0 ]; then
    printf '%s\n' "${FILES[@]}"
    return 0
  fi
  if [ -n "$SINCE" ] || [ -n "$UNTIL" ]; then
    local find_args=("$DIR" -maxdepth 1 -type f -name '*.md')
    [ -n "$SINCE" ] && find_args+=(-newermt "$SINCE")
    if [ -n "$UNTIL" ]; then
      if printf '%s' "$UNTIL" | grep -qE '^[0-9]{4}-[0-9]{2}-[0-9]{2}$'; then
        find_args+=(! -newermt "$UNTIL 23:59:59")
      else
        find_args+=(! -newermt "$UNTIL")
      fi
    fi
    find "${find_args[@]}" 2>/dev/null
    return 0
  fi
  find "$DIR" -maxdepth 1 -type f -name '*.md' 2>/dev/null
}

is_marp() { head -n 20 "$1" 2>/dev/null | grep -qE '^marp:[[:space:]]*true'; }

mapfile -t TARGETS < <(collect_files | sort)

# ---------- план ----------
info "Папка поиска : $DIR"
info "Форматы      : ${SELECTED[*]}"
if [ "${#FILES[@]}" -eq 0 ] && { [ -n "$SINCE" ] || [ -n "$UNTIL" ]; }; then
  info "Период       : ${SINCE:-(начало)} .. ${UNTIL:-(конец)} (mtime)"
fi
info "Найдено md   : ${#TARGETS[@]}"

if [ "${#TARGETS[@]}" -eq 0 ]; then
  info "Нечего конвертировать."
  exit 0
fi

# ---------- проверка инструментов (нужны для реального прогона) ----------
CHROME=""
if [ "$DRY_RUN" -eq 0 ]; then
  resolve_marp || die_tools "marp не найден. Установите: npm i -g @marp-team/marp-cli"
  CHROME="$(resolve_chrome)" || die_tools "Chrome/Chromium не найден. Укажите --chrome PATH или задайте CHROME_PATH."
  [ -f "$CONFIG" ] || die_tools "не найден конфиг $CONFIG (нужен для рендера Mermaid)"
  if [ "$WITH_SANDBOX" -eq 0 ]; then
    export CHROME_NO_SANDBOX=1
  fi
  info "marp         : ${MARP[*]}"
  info "chrome       : $CHROME"
  info "конфиг       : $CONFIG"
fi

COMMON=(-c "$CONFIG" --browser-path "$CHROME" --html)

# ---------- конвертация ----------
ok=0
fail=0
skipped=0
start_ts=$(date +%s)

for f in "${TARGETS[@]}"; do
  if [ ! -f "$f" ]; then
    warn "файл не найден: $f"
    fail=$((fail + 1))
    continue
  fi
  if ! is_marp "$f" && [ "$FORCE" -eq 0 ]; then
    info "пропуск (нет 'marp: true'): $f"
    skipped=$((skipped + 1))
    continue
  fi

  base="$(basename "${f%.*}")"
  outdir="${OUT_DIR:-$(dirname -- "$f")}"
  [ "$DRY_RUN" -eq 1 ] || mkdir -p "$outdir"

  for fmt in "${SELECTED[@]}"; do
    case "$fmt" in
      pdf)      out="$outdir/$base.pdf";               args=(--pdf -o "$out") ;;
      pptx)     out="$outdir/$base.pptx";              args=(--pptx -o "$out") ;;
      editable) out="$outdir/${base}_editable.pptx";   args=(--pptx --pptx-editable -o "$out") ;;
    esac

    if [ "$DRY_RUN" -eq 1 ]; then
      printf '  [dry-run] %-8s %s -> %s\n' "$fmt" "$f" "$out"
      continue
    fi

    info "[$fmt] $f -> $out"
    if [ "$QUIET" -eq 1 ]; then
      if "${MARP[@]}" "${COMMON[@]}" "${args[@]}" "$f" >/dev/null 2>&1; then
        ok=$((ok + 1))
      else
        warn "сбой: $fmt для $f"
        fail=$((fail + 1))
      fi
    else
      if "${MARP[@]}" "${COMMON[@]}" "${args[@]}" "$f"; then
        ok=$((ok + 1))
      else
        warn "сбой: $fmt для $f"
        fail=$((fail + 1))
      fi
    fi
  done
done

# ---------- итог ----------
if [ "$DRY_RUN" -eq 1 ]; then
  info "Режим dry-run: файлы не созданы."
  exit 0
fi

elapsed=$(( $(date +%s) - start_ts ))
printf '\nГотово: успешных конверсий %d, ошибок %d, пропущено файлов %d, время %ds\n' \
  "$ok" "$fail" "$skipped" "$elapsed"

if [ "$fail" -gt 0 ]; then
  exit 3
fi
exit 0
