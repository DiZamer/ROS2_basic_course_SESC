---
marp: true
theme: default
paginate: true
size: 16:9
title: "Занятие 2: Контейнеризация и Git — lecture-v2"
description: "Ясная лекция с наглядными моделями жизненных циклов Docker, Dev Container и Git."
footer: 'ROS2 • Занятие 2 • lecture-v2 • лекция 40 мин из 120'
---

<style>
section { font-family: Inter, "Segoe UI", Arial, sans-serif; color:#172033; padding:46px 60px; border-top:7px solid #1d4ed8; font-size:23px; }
h1,h2,h3 { color:#1e40af; } h1{font-size:47px} h2{font-size:34px} h3{font-size:22px;margin:0 0 8px}
strong{color:#1d4ed8} code{color:#173b7a;background:#edf3ff;padding:2px 6px;border-radius:4px} pre{font-size:18px;line-height:1.28}
.lead{display:flex;flex-direction:column;justify-content:center;background:linear-gradient(135deg,#eff6ff,#fff 70%)}
.tag{display:inline-block;background:#dbeafe;color:#1e3a8a;padding:6px 13px;border-radius:18px;font-size:15px;margin:4px}
.row{display:flex;align-items:center;justify-content:center;gap:12px;margin:23px 0}.box{flex:1;border:2px solid #60a5fa;background:#f8fbff;border-radius:11px;padding:15px;text-align:center;font-weight:700}.arrow{color:#2563eb;font-size:26px;font-weight:800}
.grid{display:grid;grid-template-columns:1fr 1fr;gap:15px;margin:18px 0}.card{border:1px solid #bfdbfe;background:#f8fbff;border-radius:11px;padding:14px 18px}.muted{color:#5b6b82;font-size:17px}.call{border-left:6px solid #16a34a;background:#f0fdf4;padding:12px 16px;margin-top:13px}.warning{border-left:6px solid #dc2626;background:#fef2f2;padding:12px 16px;margin-top:13px}
.state{display:flex;align-items:center;gap:8px;margin:22px 0}.statebox{flex:1;border:2px solid #3b82f6;border-radius:10px;padding:16px;text-align:center;background:white}.cmd{color:#1d4ed8;font-size:16px;font-weight:700;white-space:nowrap}.small{font-size:17px} table{font-size:17px}th{background:#1e40af;color:white}td,th{padding:7px 10px}section::after{color:#94a3b8}
</style>

<!-- _class: lead -->
<!-- _paginate: false -->

# Контейнеризация и Git

## Одинаковая мастерская. Понятная история изменений.

<span class="tag">Уровень 1 · лекция 40 минут</span>
<span class="tag">Уровень 2 · практика 40 минут</span>
<span class="tag">Уровень 3 · TIAGo 40 минут</span>

**Вопрос занятия:** как повторить работу на другом компьютере и понять, что изменилось?

---

## Две причины «у меня работает»

<div class="grid"><div class="card"><h3>Среда отличается</h3>ОС, ROS 2 или версия библиотек.</div><div class="card"><h3>Проект отличается</h3>Есть незаписанная правка, другой коммит или ветка.</div></div>

<div class="row"><div class="box">Docker +<br>Dev Container<br><span class="muted">рабочая среда</span></div><div class="arrow">+</div><div class="box">Git<br><span class="muted">история проекта</span></div><div class="arrow">→</div><div class="box">Повторяемая работа</div></div>

Один Git-коммит сам по себе не фиксирует всё окружение.

<!-- Спросить группу, почему исходники одинаковые, а сборка может различаться. -->

---

## Docker: от рецепта к запуску

<div class="row"><div class="box">Dockerfile<br><span class="muted">инструкция сборки</span></div><div class="arrow">build →</div><div class="box">Image<br><span class="muted">шаблон среды</span></div><div class="arrow">run →</div><div class="box">Container<br><span class="muted">запущенный экземпляр</span></div></div>

В контейнере могут находиться ROS 2, инструменты сборки и зависимости проекта.

<div class="call">Image — не процесс. Container — не новая полноценная виртуальная машина.</div>

---

## Container и виртуальная машина — не одно и то же

<div class="grid"><div class="card"><h3>Container</h3><ul><li>изолированная среда процессов;</li><li>свой взгляд на файловую систему;</li><li>использует ядро host.</li></ul></div><div class="card"><h3>Виртуальная машина</h3><ul><li>запускает гостевую ОС;</li><li>имеет собственное ядро гостя;</li><li>обычно требует больше ресурсов.</li></ul></div></div>

Контейнер выравнивает среду, но не обеспечивает абсолютную изоляцию.

---

## Где живёт проект?

<div class="row"><div class="box">Папка проекта<br>на хосте</div><div class="arrow">↔</div><div class="box">Bind mount<br><span class="muted">подключённая папка</span></div><div class="arrow">↔</div><div class="box">Workspace<br>контейнера</div></div>

<div class="grid"><div class="card"><h3>Bind mount</h3>Общая папка хоста и контейнера. Обычно здесь исходники.</div><div class="card"><h3>Docker volume</h3>Отдельное управляемое Docker хранилище. Это не синоним bind mount.</div></div>

Файл в writable layer контейнера может исчезнуть при удалении контейнера.

---

## Что переживёт удаление контейнера?

<table><thead><tr><th>Место</th><th>Что происходит</th><th>Подходит для исходников?</th></tr></thead><tbody><tr><td>Writable layer</td><td>Связан с экземпляром контейнера</td><td>Нет, не рассчитывать на сохранность</td></tr><tr><td>Bind mount</td><td>Файлы остаются в папке проекта на хосте</td><td>Да, частый вариант workspace</td></tr><tr><td>Docker volume</td><td>Живёт отдельно, пока volume не удалён</td><td>Для данных; не путать с папкой проекта</td></tr></tbody></table>

**Практическое правило:** исходники держите в подключённой рабочей папке.

---

## Dev Container: открыть и работать

<div class="state"><div class="statebox">Открыть<br>проект</div><div class="cmd">→</div><div class="statebox">devcontainer.json<br>образ + workspace</div><div class="cmd">→</div><div class="statebox">Запустить<br>container</div><div class="cmd">→</div><div class="statebox">Редактор +<br>терминал</div></div>

- **Reopen** — снова подключиться к рабочей среде.
- **Rebuild** — пересобрать среду после изменения описания сборки.

Обычная правка кода обычно не требует пересборки образа.

---

## Dev Container: описание лежит рядом с проектом

```json
{
  "name": "ROS2 Jazzy Course",
  "build": { "dockerfile": "Dockerfile" },
  "remoteUser": "ubuntu"
}
```

<div class="grid"><div class="card"><h3>Среда</h3>Какой образ или Dockerfile использовать?</div><div class="card"><h3>Рабочая папка</h3>Какие файлы проекта видны контейнеру?</div></div>

Фрагмент учебный; фактические настройки берутся из конфигурации курса.

---

## Git: правка проходит три состояния

<div class="state"><div class="statebox">Рабочая копия<br><span class="muted">редактирую</span></div><div class="cmd">git add →</div><div class="statebox">Индекс<br><span class="muted">выбрал</span></div><div class="cmd">git commit →</div><div class="statebox">Коммит<br><span class="muted">зафиксировал</span></div></div>

- `git status` — где находятся изменения?
- `git diff` — что изменилось в рабочей копии?
- `git diff --staged` — что попадёт в следующий коммит?

**Коммит фиксирует подготовленный индекс.**

---

## Мини-цикл: проверить, подготовить, сохранить

```bash
git status --short
git diff
git add README.md
git diff --staged
git commit -m "Добавил идею робота"
git log --oneline -1
```

<div class="call">Ожидаемый результат: один понятный коммит, рабочая копия чистая.</div>

Сначала смотрим на состояние; потом меняем историю.

---

## Ветка: отдельная линия эксперимента

<div class="state"><div class="statebox">main<br>A ─ B</div><div class="arrow">↘</div><div class="statebox">feature/sensor<br>C ─ D</div></div>

```bash
git switch -c feature/sensor
git log --oneline --decorate --all
```

Изменения feature-ветки не входят в `main`, пока их не интегрировали.

---

## Remote: обмен изменениями

<div class="state"><div class="statebox">Рабочая ветка</div><div class="cmd">← fetch / pull</div><div class="statebox">Remote<br><span class="muted">удалённый репозиторий</span></div></div>
<div class="state"><div class="statebox">Локальные коммиты</div><div class="cmd">push →</div><div class="statebox">Remote branch</div></div>

- `fetch` обновляет сведения об удалённой истории.
- `pull` получает и интегрирует изменения.
- `push` отправляет коммиты.

---

## `.gitignore`: исключить шум и секреты

```gitignore
build/
install/
log/
__pycache__/
*.py[cod]
.env
*.key
*.pem
id_ed25519
```

`.gitignore` работает для новых неотслеживаемых файлов, но не стирает то, что уже добавлено в Git.

<div class="warning">Если ключ уже отправлен в remote — сначала отозвать и заменить его.</div>

---

## Уровень 3: контейнер TIAGo

<div class="state"><div class="statebox">Dockerfile<br>ROS 2 Humble</div><div class="cmd">→</div><div class="statebox">Dev Container<br>workspace</div><div class="cmd">→</div><div class="statebox">post_create<br>подготовка</div><div class="cmd">→</div><div class="statebox">post_start<br>vcs / rosdep / colcon</div></div>

Контейнер TIAGo отделён от общего контейнера курса с ROS 2 Jazzy.

<div class="call">На кейсе читаем конфигурацию; не повторяем длительный импорт и сборку.</div>

---

## Быстрая диагностика

| Симптом | Сначала проверь |
| --- | --- |
| Файл исчез | `pwd` и рабочую папку mount |
| Новая конфигурация не применилась | Rebuild Container |
| Коммит пустой | `git status`, `git diff --staged` |
| `build/` отображается | `.gitignore` и tracking |
| Ключ опубликован | Отозвать и заменить ключ |

---

<!-- _class: lead -->
<!-- _paginate: false -->

# Одинаковая среда.
# Осознанные изменения.

Уровень 2: практика · Уровень 3: TIAGo · ДЗ: первый коммит модели

[`practice-v2_02_container_git_v1.md`](../2_practice/practice-v2_02_container_git_v1.md) · [`homework-v2_02_container_git_v1.md`](../2_homework/homework-v2_02_container_git_v1.md)

---

## Источники

- [Docker: контейнеры](https://docs.docker.com/get-started/docker-concepts/the-basics/what-is-a-container/)
- [Docker: bind mounts](https://docs.docker.com/engine/storage/bind-mounts/) · [volumes](https://docs.docker.com/engine/storage/volumes/)
- [Dev Container Specification](https://containers.dev/)
- [Pro Git](https://git-scm.com/book/ru/v2) · [`gitignore`](https://git-scm.com/docs/gitignore)
- [`3_Robot/TIAgo_humble/README.md`](../3_Robot/TIAgo_humble/README.md)
