<p align="right">
  <a href="es.README.md">
    <img src="https://img.shields.io/badge/🌐%20Spanish-README-blue?style=for-the-badge" alt="Spanish README" />
  </a>
</p>

# 💡 Project C03

This repository contains the exercises for Project C03, focused on string manipulation functions in the C language.

The goal is to reproduce the behavior of standard functions, developing your understanding of how strings are compared and concatenated precisely and efficiently.

---

## 🎯 Project Objectives

- Reproduce standard functions like `strcmp`, `strcat`, `strstr`, etc.  
- Implement string comparisons with and without character limits  
- Concatenate strings in a controlled and safe way  
- Search for substrings within other strings  
- Follow the 42 Norminette style guidelines

---

## 📁 Exercise Table

| Exercise | Description         | Directory | Deliverable File     |
|----------|---------------------|-----------|-----------------------|
| 00       | Reproduce `strcmp`  | ex00/     | ft_strcmp.c           |
| 01       | Reproduce `strncmp` | ex01/     | ft_strncmp.c          |
| 02       | Reproduce `strcat`  | ex02/     | ft_strcat.c           |
| 03       | Reproduce `strncat` | ex03/     | ft_strncat.c          |
| 04       | Reproduce `strstr`  | ex04/     | ft_strstr.c           |
| 05       | Reproduce `strlcat` | ex05/     | ft_strlcat.c          |

---

## 🔧 Compilation Instructions

Compile each exercise individually with:

```bash
gcc -Wall -Wextra -Werror exXX/file.c -o program_name
```


---

## 🧪 Testing Tips

    - Test with empty strings, long strings, and special characters  
    
    - Check differences between similar and completely different strings  
    
    - Use valgrind to check for memory leaks if applicable  
    
    - Compare behavior with standard functions

---

## 📐 Style Guidelines

    - Indent code using tabs instead of spaces  
    
    - Use coherent and descriptive names  
    
    - No external functions allowed, except `write` where permitted  
    
    - Code should be readable, organized, and modular

---

## 📌 Recommendations

    - Make frequent and well-commented commits  
    
    - Check the `man` page of each standard function to understand its behavior  
    
    - Test thoroughly before submitting  
    
    - Participate in your study group to share progress and questions

---

## 📋 Project Status

| 🧩 Exercise | Folder       | Completed | Submitted | Validation |
|-------------|--------------|-----------|-----------|------------|
| 00          | [ex00](./ex00/) | ✅ Yes  | ✅ Yes  | 100%       |
| 01          | [ex01](./ex01/) | ✅ Yes  | ✅ Yes  | 100%       |
| 02          | [ex02](./ex02/) | ✅ Yes  | ✅ Yes  | 100%       |
| 03          | [ex03](./ex03/) | ✅ Yes  | ✅ Yes  | 100%       |
| 04          | [ex04](./ex04/) | ✅ Yes  | ✅ Yes  | 100%       |
| 05          | [ex05](./ex05/) | ✅ Yes  | ✅ Yes  | 100%       |

---

## 📜 License

This project is part of the learning process during the 42 Piscine and is submitted for educational purposes.  
You may reuse the code for personal use or as reference.

---

## 🙋 Author
Developed as part of the intensive C programming challenge during the 42 Piscine.

---

## 📧 Contact
[rmarin-n@student.42barcelona.com](mailto:rmarin-n@student.42barcelona.com)
