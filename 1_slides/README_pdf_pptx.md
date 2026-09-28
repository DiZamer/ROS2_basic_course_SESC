# Преобразование Marp-презентаций в PDF и PPTX

> Конвертация слайдов `1_slides/*.md` в PDF и PowerPoint одним скриптом, без ИИ-агента.

## Что делает скрипт

`build_slides.sh` собирает Marp-презентации из Markdown в три формата:

| Формат | Файл на выходе | Редактируемый | Как получается |
| --- | --- | --- | --- |
| `pdf` | `<имя>.pdf` | нет | Chrome печатает слайды в PDF |
| `pptx` | `<имя>.pptx` | нет | каждый слайд — изображение |
| `editable` | `<имя>_editable.pptx` | да | PDF → LibreOffice Impress (экспериментально) |

Поддерживаются три режима отбора файлов: отдельные файлы, период изменения и вся папка.

## Требования

| Компонент | Зачем | Проверка |
| --- | --- | --- |
| Linux + `bash` | запуск скрипта | — |
| `marp-cli` | движок конвертации | `marp --version` |
| Chrome или Chromium | рендер PDF/PPTX | находится автоматически |
| LibreOffice | только формат `editable` | `soffice --version` |
| Интернет | шрифты Google Fonts и диаграммы kroki.io | — |

Установка `marp-cli`, если его нет:

```bash
npm i -g @marp-team/marp-cli
```

## Быстрый старт

Запускать можно из корня проекта или из папки `1_slides/`. Ниже — из корня.

```bash
# 1. Один или несколько перечисленных файлов
./1_slides/build_slides.sh 1_slides/lecture_08_node.md
./1_slides/build_slides.sh 1_slides/lecture_01_ubuntu.md 1_slides/lecture_09_topic.md

# 2. Презентации, изменённые в период (по mtime)
./1_slides/build_slides.sh --since 2026-09-15 --until 2026-09-18

# 3. Все Marp-презентации в папке
./1_slides/build_slides.sh --all

# Только PDF и обычный PPTX
./1_slides/build_slides.sh --all --format pdf,pptx

# Сначала посмотреть план, ничего не создавать
./1_slides/build_slides.sh --all --dry-run

# Результат в отдельную папку
./1_slides/build_slides.sh --all --out /tmp/slides_out
```

По умолчанию результат пишется рядом с исходным `.md` (то есть в `1_slides/`), а исходные `.md` не изменяются.

## Опции

| Опция | Описание |
| --- | --- |
| `FILE.md ...` | преобразовать перечисленные файлы |
| `--since DATE` | начало периода включительно, `YYYY-MM-DD` или `YYYY-MM-DD HH:MM[:SS]` |
| `--until DATE` | конец периода включительно; для даты без времени — до `23:59:59` |
| `--all` | все Marp-файлы в папке (режим по умолчанию) |
| `-d, --dir DIR` | папка поиска, по умолчанию — папка скрипта (`1_slides/`) |
| `-o, --out DIR` | папка вывода, по умолчанию — рядом с каждым `.md` |
| `-f, --format LIST` | `pdf`, `pptx`, `editable` или `all`; по умолчанию все три |
| `--chrome PATH` | путь к Chrome/Chromium, иначе автопоиск |
| `--with-sandbox` | не выставлять `CHROME_NO_SANDBOX=1` |
| `--force` | конвертировать даже файлы без `marp: true` |
| `-n, --dry-run` | показать план и выйти |
| `-q, --quiet` | меньше вывода |
| `-h, --help` | справка |

Коды выхода: `0` — успех, `1` — ошибка аргументов, `2` — не найден инструмент, `3` — часть файлов не собралась.

## Как это работает

1. **Поиск `marp`**: `PATH` → затем `~/.nvm/versions/node/*/bin/marp`.
2. **Поиск Chrome**: `--chrome` → `CHROME_PATH` → `BROWSER_PATH` → кэш puppeteer (`~/.cache/puppeteer/chrome/...`) → системные `google-chrome`/`chromium`/`microsoft-edge`.
3. **Sandbox**: по умолчанию скрипт выставляет `CHROME_NO_SANDBOX=1`. Без этого Chrome в Ubuntu 23.10+ падает с ошибкой `No usable sandbox`. Отключается флагом `--with-sandbox`.
4. **Конфиг Marp**: всегда подключается `marp.config.js` из папки скрипта — он нужен для рендера Mermaid.
5. **Отбор файлов**: переданные файлы, либо `find -newermt` по mtime, либо все `*.md` в папке. Затем остаются только файлы с `marp: true` во front matter (остальные пропускаются, если не указан `--force`).
6. **Конвертация**: для каждого формата вызывается `marp` с флагами `--pdf` / `--pptx` / `--pptx --pptx-editable`. Ошибка на одном файле не прерывает остальные.

## Диаграммы Mermaid

Блоки ```` ```mermaid ```` рендерятся в SVG через сервис [kroki.io](https://kroki.io). За это отвечает `marp.config.js` рядом со скриптом: он превращает блок в `<img>` с SVG.

- Нужен интернет. Без сети диаграммы не отобразятся.
- Содержимое диаграмм отправляется на kroki.io.
- Флаг `--html` обязателен: слайды используют inline-HTML, его выставляет скрипт.

## Типичные ошибки

| Симптом | Причина | Решение |
| --- | --- | --- |
| `Failed to launch the browser process ... No usable sandbox` | Chrome без `--no-sandbox` | не запускать с `--with-sandbox`; скрипт выставляет переменную сам |
| `Timed out ... FirefoxLauncher` | Marp выбрал Firefox | убедиться, что Chrome найден (`--chrome PATH`); скрипт передаёт `--browser-path` автоматически |
| `Chrome/Chromium не найден` | нет браузера | установить Chrome/Chromium или задать `--chrome PATH` |
| `marp не найден` | нет `marp-cli` | `npm i -g @marp-team/marp-cli` |
| Диаграмма пустая или отсутствует | нет сети / недоступен kroki.io | проверить интернет; при необходимости обновить записи в кэше |
| Шрифты отличаются | нет доступа к Google Fonts | подключить интернет, рендер повторить |
| `editable.pptx` выглядит иначе | экспериментальный режим и LibreOffice | использовать `pdf`/`pptx` как эталон оформления |
| `LibreOffice could not convert PPTX internally` | не установлен Impress | установить `libreoffice-impress` |

## Примечания

- Файлы `*.pdf` и `*.pptx` уже перечислены в `.gitignore` — в репозиторий они не попадают.
- Повторный запуск перезаписывает готовые файлы.
- Исходные `.md` никогда не изменяются.
- `editable` собирается медленнее остальных и зависит от LibreOffice: оформление может немного отличаться от PDF.
- Для проверки результата полезны `pdfinfo`, `pdftotext`, `pdfimages` (пакет poppler-utils).

## Связанные файлы

- `1_slides/build_slides.sh` — сам скрипт.
- `1_slides/marp.config.js` — конфиг Marp с плагином Mermaid → kroki.
- `1_slides/lecture_NN_*.md` — исходные презентации.
