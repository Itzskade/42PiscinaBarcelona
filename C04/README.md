# 💡 Project C04

This repository contains the exercises for Project C04, focused on number manipulation and string conversion in the C language.

Throughout these exercises, you'll work with functions like `ft_strlen`, `ft_putstr`, `ft_putnbr`, and numeric conversions such as `ft_atoi`, `ft_putnbr_base`, and `ft_atoi_base`.

---

## 🎯 Project Objectives

- Implement output functions like `putstr` and `putnbr` using only `write`  
- Reproduce the behavior of standard functions like `atoi`  
- Create functions that convert numbers between different bases  
- Follow the 42 Norminette style guidelines

---

## 📁 Exercise Table

| Exercise | Description                   | Directory | Deliverable File        |
|----------|-------------------------------|-----------|--------------------------|
| 00       | Reproduce `strlen`            | ex00/     | ft_strlen.c              |
| 01       | Display a string using `write`| ex01/     | ft_putstr.c              |
| 02       | Display a number using `write`| ex02/     | ft_putnbr.c              |
| 03       | Reproduce `atoi`              | ex03/     | ft_atoi.c                |
| 04       | Display a number in a given base | ex04/  | ft_putnbr_base.c         |
| 05       | Reproduce `atoi` with base    | ex05/     | ft_atoi_base.c           |

---

## 🔧 Compilation Instructions

Compile each exercise individually with:

```bash
gcc -Wall -Wextra -Werror exXX/file.c -o program_name
```

---

## 🧪 Testing Tips

    - Test with empty inputs, negative values, and combinations of special characters  
    
    - Compare with standard functions (`atoi`, `strlen`, etc.) to verify behavior  
    
    - Check handling of invalid bases in exercises 04 and 05  
    
    - Use valgrind to ensure there are no memory leaks (if applicable)

---

## 📐 Style Guidelines

    - Indent code using tabs instead of spaces  
    
    - Use coherent and descriptive variable names  
    
    - No external functions allowed, except `write` where authorized  
    
    - Code should be readable, well-structured, and clear
    

---

## 📌 Recommendations

    - Make frequent commits with descriptive messages  
    
    - Consult the `man` pages of standard functions to understand their behavior  
    
    - Share your progress with your study group  
    
    - Test thoroughly before submitting

---

## 📋 Project Status

| 🧩 Exercise | Folder       | Completed | Submitted | Validation |
|-------------|--------------|-----------|-----------|------------|
| 00          | [ex00](./ex00/) | ✅ Yes  | ✅ Yes  | 100%       |
| 01          | [ex01](./ex01/) | ✅ Yes  | ✅ Yes  | 100%       |
| 02          | [ex02](./ex02/) | ✅ Yes  | ✅ Yes  | 100%       |
| 03          | [ex03](./ex03/) | ✅ Yes  | ✅ Yes  | 100%       |
| 04          | [ex04](./ex04/) | ⬜ No   | ⬜ No   | —          |
| 05          | [ex05](./ex05/) | ⬜ No   | ⬜ No   | —          |

---

## 📜 License

This project is part of the intensive C programming challenge during the 42 Piscine.  
It is submitted for educational purposes and may be reused as a personal reference.

---

## 🙋 Author
Developed as part of the learning process during the 42 Piscine.

---

## 📧 Contact
[rmarin-n@student.42barcelona.com](mailto:rmarin-n@student.42barcelona.com)
