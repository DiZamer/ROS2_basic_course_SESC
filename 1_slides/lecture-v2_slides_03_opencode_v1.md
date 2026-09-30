---
marp: true
theme: default
paginate: true
size: 16:9
title: "Занятие 3: агентная инженерия с OpenCode — lecture-v2"
description: "Запрос, контекст, инструменты и проверка результата ИИ-агента."
footer: 'ROS2 • Занятие 3 • lecture-v2 • лекция 40 мин из 120'
---

<style>
section { font-family: Inter, "Segoe UI", Arial, sans-serif; color:#172033; padding:46px 60px; border-top:7px solid #1d4ed8; font-size:23px; }
h1,h2,h3{color:#1e40af}h1{font-size:47px}h2{font-size:34px}h3{font-size:22px;margin:0 0 8px}
strong{color:#1d4ed8}code{color:#173b7a;background:#edf3ff;padding:2px 6px;border-radius:4px}pre{font-size:18px;line-height:1.3}
.lead{display:flex;flex-direction:column;justify-content:center;background:linear-gradient(135deg,#eff6ff,#fff 70%)}
.tag{display:inline-block;background:#dbeafe;color:#1e3a8a;padding:6px 13px;border-radius:18px;font-size:15px;margin:4px}
.row{display:flex;align-items:center;justify-content:center;gap:12px;margin:22px 0}.box{flex:1;border:2px solid #60a5fa;background:#f8fbff;border-radius:11px;padding:15px;text-align:center;font-weight:700}.arrow{color:#2563eb;font-size:26px;font-weight:800}
.grid{display:grid;grid-template-columns:1fr 1fr;gap:15px;margin:18px 0}.card{border:1px solid #bfdbfe;background:#f8fbff;border-radius:11px;padding:14px 18px}.muted{color:#5b6b82;font-size:17px}.call{border-left:6px solid #16a34a;background:#f0fdf4;padding:12px 16px;margin-top:13px}.warn{border-left:6px solid #dc2626;background:#fef2f2;padding:12px 16px;margin-top:13px}.small{font-size:17px}section::after{color:#94a3b8}
</style>

<!-- _class: lead -->
<!-- _paginate: false -->

# Агентная инженерия с OpenCode

## Агент помогает читать проект. Инженер проверяет.

<span class="tag">Лекция · 40 минут</span><span class="tag">Практика · 40 минут</span><span class="tag">TIAGo · 40 минут</span>

**Вопрос:** как получить быстрый ответ и понять, на чём он основан?

---

## Агент — не просто строка автодополнения

<div class="grid"><div class="card"><h3>Получает задачу</h3>Запрос задаёт цель и ограничения.</div><div class="card"><h3>Использует инструменты</h3>Может читать, искать, запускать или редактировать — если права позволяют.</div></div>

<div class="row"><div class="box">Prompt<br><span class="muted">что нужно?</span></div><div class="arrow">→</div><div class="box">Контекст<br><span class="muted">какие файлы?</span></div><div class="arrow">→</div><div class="box">Инструменты<br><span class="muted">что разрешено?</span></div><div class="arrow">→</div><div class="box">Ответ</div></div>

---

## Аналогия: стажёр с быстрым поиском

Агент похож на стажёра: быстро читает материалы и выполняет поручение.

<div class="grid"><div class="card"><h3>Что помогает</h3>`AGENTS.md` объясняет правила проекта; точный запрос задаёт ожидаемый результат.</div><div class="card"><h3>Что остаётся студенту</h3>Проверить факты, команды и изменения по источникам.</div></div>

Аналогия ограничена: модель не понимает мир как человек и может уверенно ошибаться.

---

## Хороший запрос похож на маленькое ТЗ

```text
Цель: объяснить пакет tiago_description.
Контекст: используй только 3_Robot/TIAgo_humble.
Ограничение: ничего не меняй.
Формат: 3 пункта и пути к файлам.
Проверка: укажи источник каждого факта.
```

<div class="call">Чем яснее границы задачи и способ проверки, тем легче оценить ответ.</div>

---

## `AGENTS.md` — инструкция, не песочница

<div class="row"><div class="box">Цели проекта</div><div class="arrow">→</div><div class="box">AGENTS.md<br><span class="muted">правила и контекст</span></div><div class="arrow">→</div><div class="box">OpenCode<br><span class="muted">учитывает инструкции</span></div></div>

Инструкция объясняет, как работать. Она сама по себе не блокирует shell-команду.

---

## Permission управляет инструментами

| Право | Смысл |
| --- | --- |
| `allow` | выполнить без отдельного вопроса |
| `ask` | запросить подтверждение |
| `deny` | запретить действие |

Проверь `edit` и `bash` в фактическом `opencode.jsonc` до запроса, который способен менять проект.

---

## Plan и Build: роли, а не магические гарантии

<div class="grid"><div class="card"><h3>Plan</h3>Для анализа и планирования; изменения ограничены по умолчанию.</div><div class="card"><h3>Build</h3>Для выполнения задач; возможны изменения, если разрешены настройками.</div></div>

**Фактические права зависят от конфигурации и версии.** Проверь их; для упражнения используй тестовую папку.

---

## Минимальный безопасный цикл

<div class="row"><div class="box">Задать вопрос</div><div class="arrow">→</div><div class="box">Проверить права</div><div class="arrow">→</div><div class="box">Получить ответ</div><div class="arrow">→</div><div class="box">Открыть источник</div></div>

```bash
opencode --version
opencode --help
```

Не начинать с команды, меняющей код робота.

---

## Ответ агента — гипотеза, пока не найден источник

<div class="grid"><div class="card"><h3>Ответ</h3>«Пакет tiago_description содержит описание геометрии робота».</div><div class="card"><h3>Проверка</h3>Открой README и дерево `tiago_description`; найди соответствующее описание.</div></div>

Попроси путь к файлу и сверь утверждение вручную.

---

## Не отправляй секреты в prompt

<div class="grid"><div class="card"><h3>Не вставлять</h3>Приватные SSH-ключи, пароли, токены, `.env`.</div><div class="card"><h3>Можно использовать</h3>Обезличенную конфигурацию или тестовый пример без доступа к реальным системам.</div></div>

<div class="warn">Запрос «не меняй файлы» полезен, но проверь permissions и работай в безопасной папке.</div>

---

## Уровень 3: агент исследует TIAGo

<div class="row"><div class="box">Вопрос о пакете</div><div class="arrow">→</div><div class="box">OpenCode читает README / AGENTS</div><div class="arrow">→</div><div class="box">Студент открывает источник</div><div class="arrow">→</div><div class="box">Факт подтверждён?</div></div>

Агент помогает найти путь в проекте. Он не запускает и не перенастраивает робот в этом упражнении.

---

## Домашний шаг: дневник проверенных решений

1. Задать агенту ограниченный вопрос о `README.md` своей модели.
2. Проверить названные факты.
3. Записать вывод и источник в `~/my_robot/diary.md`.

<div class="call">Результат считается полезным, если его можно проверить.</div>

---

<!-- _class: lead -->
<!-- _paginate: false -->

# Агент ускоряет чтение.
# Ответственность остаётся у инженера.

Практика · [`practice-v2_03_opencode_v1.md`](../2_practice/practice-v2_03_opencode_v1.md)

---

## Источники и продолжение

- [OpenCode agents](https://opencode.ai/docs/agents/)
- [OpenCode permissions](https://opencode.ai/docs/permissions/)
- [OpenCode rules](https://opencode.ai/docs/rules/)
- [`opencode.jsonc`](../opencode.jsonc) · [`AGENTS.md`](../AGENTS.md)
- [`homework-v2_03_opencode_v1.md`](../2_homework/homework-v2_03_opencode_v1.md)
