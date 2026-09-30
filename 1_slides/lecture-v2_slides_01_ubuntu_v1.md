---
marp: true
theme: default
paginate: true
size: 16:9
title: "Занятие 1: Ubuntu и командная строка — lecture-v2"
description: "Понятная модель shell, файлов, прав и SSH для первого занятия курса ROS 2."
footer: 'ROS2 • Занятие 1 • lecture-v2 • лекция 40 мин из 120'
---

<style>
section { font-family: Inter, "Segoe UI", Arial, sans-serif; color:#172033; padding:46px 60px; border-top:7px solid #1d4ed8; font-size:23px; }
h1,h2,h3 { color:#1e40af; } h1{font-size:48px} h2{font-size:35px} h3{font-size:22px;margin:0 0 8px}
strong{color:#1d4ed8} code{color:#173b7a;background:#edf3ff;padding:2px 6px;border-radius:4px} pre{font-size:19px;line-height:1.3}
.lead{display:flex;flex-direction:column;justify-content:center;background:linear-gradient(135deg,#eff6ff,#fff 70%)}
.tag{display:inline-block;background:#dbeafe;color:#1e3a8a;padding:6px 13px;border-radius:18px;font-size:15px;margin:4px}
.row{display:flex;align-items:center;justify-content:center;gap:12px;margin:22px 0}.box{flex:1;border:2px solid #60a5fa;background:#f8fbff;border-radius:11px;padding:15px;text-align:center;font-weight:700}.arrow{color:#2563eb;font-size:27px;font-weight:800}
.grid{display:grid;grid-template-columns:1fr 1fr;gap:15px;margin:18px 0}.card{border:1px solid #bfdbfe;background:#f8fbff;border-radius:11px;padding:14px 18px}.muted{color:#5b6b82;font-size:17px}.call{border-left:6px solid #16a34a;background:#f0fdf4;padding:12px 16px;margin-top:13px}.warn{border-left:6px solid #dc2626;background:#fef2f2;padding:12px 16px;margin-top:13px}.small{font-size:17px}
section::after{color:#94a3b8}
</style>

<!-- _class: lead -->
<!-- _paginate: false -->

# Ubuntu и командная строка

## Первый инструмент разработчика робота — терминал

<span class="tag">Лекция · 40 минут</span><span class="tag">Практика · 40 минут</span><span class="tag">TIAGo · 40 минут</span>

**Сегодня:** увидеть, где выполняется команда, и научиться проверять результат.

---

## Зачем роботу терминал?

<div class="grid"><div class="card"><h3>На компьютере</h3>Запустить программу, открыть конфигурацию, прочитать лог.</div><div class="card"><h3>На роботе</h3>Подключиться удалённо, запустить систему и собрать данные.</div></div>

<div class="row"><div class="box">Студент<br><span class="muted">команда</span></div><div class="arrow">→</div><div class="box">Терминал + shell<br><span class="muted">интерпретация</span></div><div class="arrow">→</div><div class="box">Программа<br><span class="muted">действие</span></div><div class="arrow">→</div><div class="box">Вывод</div></div>

---

## Команда — программа плюс аргументы

```text
ls -la /tmp
│  │   └── где смотреть
│  └────── как показать
└───────── что запустить
```

- `pwd` — где я?
- `ls` — что здесь есть?
- `cd` — куда перейти?

**Аналогия:** короткая фраза компьютеру. Но shell — именно программа, которая разбирает эту фразу.

---

## Как shell находит команду?

<div class="row"><div class="box">Ввод<br><code>ls</code></div><div class="arrow">→</div><div class="box">Shell ищет<br>по <code>PATH</code></div><div class="arrow">→</div><div class="box">Программа<br><code>/usr/bin/ls</code></div></div>

```bash
command -v bash
printf '%s\n' "$PATH"
```

`PATH` — список каталогов, где shell ищет исполняемые программы.

---

## Файловая система — дерево

<div class="grid"><div class="card"><h3>Корень `/`</h3><div class="small">`/etc` — настройки<br>`/usr/bin` — программы<br>`/tmp` — временные файлы</div></div><div class="card"><h3>Домашний каталог `~`</h3><div class="small">Файлы пользователя<br>например, `/home/ubuntu`<br>учебный workspace</div></div></div>

```bash
pwd
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws
ls -la
```

---

## Права: кто может читать, писать, запускать?

```text
-rwxr-xr--
 │││ ││ ││
 │││ ││ └┴ остальные
 │││ └┴── группа
 └┴┴───── владелец
```

- `r` — чтение; `w` — запись; `x` — запуск файла или проход по каталогу.
- `sudo` даёт административные права **одной команде**.

<div class="warn">Не запускай весь терминал под root. Перед командами изменения проверь каталог через <code>pwd</code>.</div>

---

## Скрипт: текстовый файл, который запускается

```bash
printf '#!/usr/bin/env bash\nprintf "hello robot\\n"\n' > hello_robot.sh
chmod u+x hello_robot.sh
./hello_robot.sh
```

Ожидаемый вывод:

```text
hello robot
```

`chmod u+x` добавил право запуска владельцу.

---

## Справка — часть работы, а не подсказка после ошибки

<div class="grid"><div class="card"><h3>Встроенная команда shell</h3><code>help cd</code></div><div class="card"><h3>Внешняя программа</h3><code>ls --help</code> или <code>man ls</code></div></div>

Если `man` не установлен, начни с `--help`. Если команда не найдена, проверь `command -v` и `PATH`.

---

## SSH: терминал на другой машине

<div class="row"><div class="box">Ноутбук<br><span class="muted">SSH-клиент</span></div><div class="arrow">ssh →</div><div class="box">Raspberry Pi<br><span class="muted">SSH-сервер</span></div></div>

```text
ssh user@host
scp config.yaml user@host:~/config.yaml
```

IP/имя адресует машину; порт — службу; пользователь — учётную запись.

---

## Пара ключей: один остаётся у владельца

<div class="grid"><div class="card"><h3>Публичный ключ</h3>Можно добавить на сервер, например, в <code>authorized_keys</code>.</div><div class="card"><h3>Приватный ключ</h3>Остаётся у владельца. Не публикуется, не пересылается, не коммитится.</div></div>

<div class="call">Практика использует временный учебный ключ; личные ключи на слайд не выводятся.</div>

---

## Два SSH-отказа — два направления проверки

| Сообщение | Сначала проверить |
| --- | --- |
| `Connection refused` | Слушает ли сервер на этом адресе и порту? |
| `Permission denied` | Верны ли пользователь, ключ и права? |

Текст ошибки — улика. Не начинай с повторной генерации личного ключа.

---

## Три уровня занятия

<div class="row"><div class="box">1 · Лекция<br><span class="muted">модель терминала</span></div><div class="arrow">→</div><div class="box">2 · Практика<br><span class="muted">команды в контейнере</span></div><div class="arrow">→</div><div class="box">3 · TIAGo<br><span class="muted">терминал Humble</span></div></div>

**Домашний шаг:** проверить терминал и подготовить заметку о будущей модели робота.

---

<!-- _class: lead -->
<!-- _paginate: false -->

# Сначала проверь контекст

```bash
pwd
whoami
```

Затем выполняй действие и смотри на результат.

Практика · [`practice-v2_01_ubuntu_v1.md`](../2_practice/practice-v2_01_ubuntu_v1.md)

---

## Источники и продолжение

- [Ubuntu: command line tutorials](https://ubuntu.com/server/docs/command-line-tutorials)
- [Bash Reference Manual](https://www.gnu.org/software/bash/manual/)
- [OpenSSH Manuals](https://www.openssh.com/manual.html)
- [Статья курса: Ubuntu CLI](../2_knowledge/ubuntu_cli.md)
- [Домашняя работа](../2_homework/homework-v2_01_ubuntu_v1.md)
