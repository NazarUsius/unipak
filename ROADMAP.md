# 🛣️ UniPak Development Roadmap

> A 3-month plan to build a universal package manager for GNU/Linux.  
> Author: [NazarUsius](https://github.com/NazarUsius)  
> Version Target: `v0.3 MVP`

---

## 📅 Timeline Overview

| Month | Focus                            |
|-------|----------------------------------|
| 1     | Core CLI, install/remove, repos  |
| 2     | Search, update, dependencies     |
| 3     | Diagnostics, UX, first release   |

---

## ✅ Month 1: Core Features & Repos

### 🗓 Week 1–2: CLI & Project Setup
- [ ] Initialize project structure (`src/`, `include/`, etc.)
- [ ] CLI parser with commands: `install`, `remove`, `list`, `help`
- [ ] Basic config support (`~/.unipak/config.json`)
- [ ] Build system (CMake)

### 🗓 Week 3: Install & Remove
- [ ] Download and unpack `.tar.gz` or `.zip`
- [ ] Extract to `/opt/unipak/`
- [ ] Save to `installed.json` database
- [ ] Remove packages and their files

### 🗓 Week 4: Repository System
- [ ] `repo add <url>` / `repo remove <url>` / `repo list`
- [ ] Sync JSON metadata from remote repos
- [ ] Save to local repo cache

---

## 📦 Month 2: Package Logic & Updates

### 🗓 Week 5: Search & Info
- [ ] `search <name>` — from local metadata
- [ ] `info <name>` — detailed description from repo

### 🗓 Week 6: Update & Upgrade
- [ ] `update` — sync all repos and update metadata
- [ ] `upgrade` — update all installed packages if version > current
- [ ] `update <name>` — update specific package

### 🗓 Week 7: Dependency Handling (Basic)
- [ ] Read dependencies from package metadata
- [ ] Install dependencies recursively
- [ ] Detect duplicate/failed installations

### 🗓 Week 8: Cache & Clean
- [ ] Cache downloaded packages to `~/.cache/unipak`
- [ ] `clean` — delete cache
- [ ] Improve `list` formatting

---

## 🧪 Month 3: Diagnostics & UX

### 🗓 Week 9: Integrity Check
- [ ] `check` — verify files using stored hashes
- [ ] Detect missing or corrupted files

### 🗓 Week 10: System Doctor
- [ ] `doctor` — diagnose config, repos, installed packages
- [ ] Warnings for outdated or broken dependencies

### 🗓 Week 11: CLI UX Polish
- [ ] Colored output, better formatting
- [ ] Support flags: `--help`, `--version`, `--verbose`
- [ ] User-friendly error messages

### 🗓 Week 12: Release v0.3
- [ ] Final testing
- [ ] Update `README.md`
- [ ] Tag and push v0.3 to GitHub
- [ ] Announce and open for feedback

---

## 📌 Priorities

| Level      | Tasks                                                       |
|------------|-------------------------------------------------------------|
| 🟥 High    | Install, remove, list, repo sync/add/remove                 |
| 🟨 Medium  | Search, update, upgrade, dependency management              |
| 🟩 Low     | check, doctor, CLI polish, diagnostics, colored terminal UX |

---

## 📈 After v0.3

- [ ] Flathub/AUR integration
- [ ] GUI frontend (GTK/Qt)
- [ ] Dependency conflict resolution
- [ ] Signed packages and signature verification
- [ ] Internationalization

---

Made with ❤️ for the Linux community.
