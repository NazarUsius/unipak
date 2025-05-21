# 📦 UniPak

![License](https://img.shields.io/github/license/NazarUsius/unipak)
![Language](https://img.shields.io/github/languages/top/NazarUsius/unipak)

> **A universal package manager for GNU/Linux**  
> One tool to rule them all: Pacman, AUR, Flathub — combined in a single interface.

**Created by [NazarUsius](https://github.com/NazarUsius)**

---

## 🇬🇧 English

**UniPak** is a powerful package manager for GNU/Linux.  
It supports many repositories and lets you manage them easily.  
With UniPak, you no longer need multiple tools like `pacman`, `flatpak`, `yay` — it’s all in one.

---

## 🚀 Features

- 🔍 Search across all sources
- 📦 Install, update, and remove packages
- 📚 Support for multiple repository types (official, AUR, Flathub, etc.)
- 🧩 Universal command syntax
- ⚡ Fast performance and clean architecture in C/C++

---

## 🛠 Installation

### From source

```bash
git clone https://github.com/NazarUsius/unipak.git
cd unipak
mkdir build && cd build
cmake ..
make
sudo make install
```

---

## 📘 Commands

### 🔧 Base Commands

| Command                      | Description                                    |
|------------------------------|------------------------------------------------|
| `uni install <package>`      | Install a package from configured repositories |
| `uni delete <package>`       | Remove a package from your system              |
| `uni update`                 | Update all installed packages                  |
| `uni update <package>`       | Update only the specified package              |
| `uni search <package>`       | Search packages in all enabled repositories    |
| `uni info <package>`         | Show detailed information about a package      |
| `uni list`                   | List all installed packages                    |

---

### 🗂 Repository Management

| Command                      | Description                                 |
|------------------------------|---------------------------------------------|
| `uni repo add <url>`         | Add a new repository                        |
| `uni repo remove <url>`      | Remove a repository                         |
| `uni repo list`              | List all configured repositories            |
| `uni repo sync`              | Synchronize with remote repository metadata |

---

### 🩺 System & Diagnostics

| Command                      | Description                               |
|------------------------------|-------------------------------------------|
| `uni clean`                  | Clean cached packages                     |
| `uni check`                  | Check the integrity of installed packages |

---

### ⚙️ Additional Commands

| Command                      | Description                        |
|------------------------------|------------------------------------|
| `uni help`                   | Show this help message             |
| `uni version`                | Show the current version of UniPak |

---

## 📎 License

[GPL3 License](./LICENSE)

## 🇷🇺 Русская

**UniPak** - это мощный менеджер пакетов для GNU/Linux.  
Он поддерживает множество репозиториев и позволяет легко управлять ими.  
С UniPak вам больше не нужны многочисленные инструменты, такие как `pacman`, `flatpak`, `yay` - все в одном.

---

## 🚀 Особенности

- 🔍 Поиск по всем источникам
- 📦 Установка, обновление и удаление пакетов
- 📚 Поддержка нескольких типов репозиториев (официальный, AUR, Flathub и т. д.)
- 🧩 Универсальный синтаксис команд
- ⚡ Быстрая производительность и чистая архитектура на C/C++

---

## 🛠 Установка

### Из исходников

```bash
git clone https://github.com/NazarUsius/unipak.git
cd unipak
mkdir build && cd build
cmake ...
make
sudo make install
```

---

## 📘 Команды

### 🔧 Базовые команды

| Команда                   | Описание                                      |
|---------------------------|-----------------------------------------------|
| `uni install <package>`   | Установка пакета из настроенных репозиториев  |
| `uni delete <package>`    | Удаление пакета из системы                    |
| `uni update`              | Обновление всех установленных пакетов         |
| `uni update <package>`    | Обновление только указанного пакета           |
| `uni search <package>`    | Поиск пакетов во всех включенных репозиториях |
| `uni info <package>`      | Показать подробную информацию о пакете        |
| `uni list`                | Список всех установленных пакетов             | 

---

### 🗂 Управление репозиториями

| Команда                 | Описание                                           |
|-------------------------|----------------------------------------------------|
| `uni repo add <url>`    | Добавить новый репозиторий                         |
| `uni repo remove <url>` | Удалить репозиторий                                |
| `uni repo list`         | Список всех настроенных репозиториев               |
| `uni repo sync`         | Синхронизация с метаданными удаленного репозитория |

---

### 🩺 Система и диагностика

| Команда       | Описание                                   |
|---------------|--------------------------------------------|
| `uni clean`   | Очистка кэшированных пакетов               |
| `uni check`   | Проверка целостности установленных пакетов |

---

### ⚙️ Дополнительные команды

| Команда       | Описание                         |
|---------------|----------------------------------|
| `uni help`    | Показать это сообщение помощи    |
| `uni version` | Показать текущую версию UniPak   | 

---

## 📎 Лицензия

[GPL3 Лицензия](./LICENSE)
