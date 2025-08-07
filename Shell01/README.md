# 🐚 Shell01 Project

This repository contains all the exercises for the **Shell01** project, part of the technical journey during the 42 Piscine. The goal is to strengthen skills in Bash scripting, UNIX environment manipulation, text processing, file filtering, and algorithmic logic using terminal tools.

---

## 🎯 Project Objectives

- Automate processes using scripts  
- Handle input/output from files and commands  
- Work with conditional structures and filters in Bash  
- Learn to debug, document, and deliver functional solutions

---

## 📁 Exercise Structure

| Exercise | Script                | Folder  | Description                                                | Status       |
|----------|-----------------------|---------|------------------------------------------------------------|--------------|
| 01       | `print_groups.sh`     | `ex01/` | Displays `FT_USER` groups separated by commas              | ✅ Completed  |
| 02       | `find_sh.sh`          | `ex02/` | Lists `.sh` files without extension in subdirectories      | ✅ Completed  |
| 03       | `count_files.sh`      | `ex03/` | Recursively counts files and directories                   | ✅ Completed  |
| 04       | `MAC.sh`              | `ex04/` | Displays MAC addresses of the machine                      | ✅ Completed  |
| 05       | `\?$*'MaRViN'*$?\`    | `ex05/` | Creates a special file with content “42”                   | ✅ Completed  |
| 06       | `skip.sh`             | `ex06/` | Displays alternate lines from `ls -l` output               | ✅ Completed  |
| 07       | `r_dwssap.sh`         | `ex07/` | Processes `/etc/passwd` with multiple filters and sorting  | ⬜ Pending    |
| 08       | `add_chelou.sh`       | `ex08/` | Adds two numbers in custom bases (`FT_NBR1/2`)             | ⬜ Pending    |

---

## 🔧 Tools Used

Commands: `id`, `groups`, `find`, `basename`, `wc`, `ls`, `awk`, `sed`, `cut`, `tr`, `sort`, `rev`  
Environment Variables: `$FT_USER`, `$FT_LINE1`, `$FT_LINE2`, `$FT_NBR1`, `$FT_NBR2`  
Structures: pipes (`|`), redirections (`>`, `>>`), newline control

---

## 🧪 Expected Results

| Script            | Sample Output                                   |
|-------------------|--------------------------------------------------|
| `print_groups.sh` | `god,root,admin,master,nours,bocal`              |
| `find_sh.sh`      | `script1`, `final_task`, `launch`                |
| `count_files.sh`  | `42`                                             |
| `MAC.sh`          | `00:1a:2b:3c:4d:5e`, etc.                         |
| `skip.sh`         | Alternate lines from `ls -l` output              |
| `r_dwssap.sh`     | Reversed and sorted users filtered from passwd   |
| `add_chelou.sh`   | `Salut` or `Segmentation fault`                  |

---

## 📋 Project Status

| 🧩 Exercise | Link                                                                                         | Completed | Submitted | Expected Validation     |
|-------------|----------------------------------------------------------------------------------------------|-----------|-----------|--------------------------|
| 01          | [ex01](https://github.com/Itzskade/Piscina42/tree/main/Shell01/ex01)                         | ✅ Yes    | ✅ Yes    | 100%                     |
| 02          | [ex02](https://github.com/Itzskade/Piscina42/tree/main/Shell01/ex02)                         | ✅ Yes    | ✅ Yes    | 100%                     |
| 03          | [ex03](https://github.com/Itzskade/Piscina42/tree/main/Shell01/ex03)                         | ✅ Yes    | ✅ Yes    | 100%                     |
| 04          | [ex04](https://github.com/Itzskade/Piscina42/tree/main/Shell01/ex04)                         | ✅ Yes    | ✅ Yes    | 100%                     |
| 05          | [ex05](https://github.com/Itzskade/Piscina42/tree/main/Shell01/ex05)                         | ✅ Yes    | ✅ Yes    | 100%                     |
| 06          | [ex06](https://github.com/Itzskade/Piscina42/tree/main/Shell01/ex06)                         | ✅ Yes    | ✅ Yes    | 100%                     |
| 07          | _(no content yet)_                                                                            | ⬜ No     | ⬜ No     | Not developed            |
| 08          | _(no content yet)_                                                                            | ⬜ No     | ⬜ No     | Not developed            |

---

## 📜 License

This project is part of the learning process during the 42 Barcelona Piscine and is submitted for educational purposes.  
The code may be used as a personal reference.

---

## 🙋 Author

Developed as part of the intensive C programming challenge during the 42 Piscine.

---

## 📧 Contact

[rmarin-n@student.42barcelona.com](mailto:rmarin-n@student.42barcelona.com)
