<p align="right">
  <a href="es.README.md">
    <img src="https://img.shields.io/badge/🌐%20Spanish-README-blue?style=for-the-badge" alt="Spanish README" />
  </a>
</p>

# 💡 Project C06

This repository contains the exercises for Project C06, focused on handling command-line arguments in C.

Through these programs, you'll learn to manipulate `argc`, `argv`, sort them, iterate over them, and print them following specific requirements.

---

## 🎯 Project Objectives

- Access program arguments using `argc` and `argv`  
- Display the program name or its arguments on screen  
- Sort and iterate over arguments in different ways  
- Use only the `write` function to print results  
- Follow the 42 Norminette style guidelines

---

## 📁 Exercise Table

| Exercise | Description                              | Directory | Deliverable File           |
|----------|------------------------------------------|-----------|-----------------------------|
| 00       | Display the name of the program          | ex00/     | ft_print_program_name.c     |
| 01       | Display the arguments (excluding `argv[0]`) | ex01/   | ft_print_params.c           |
| 02       | Display the arguments in reverse order   | ex02/     | ft_rev_params.c             |
| 03       | Display the arguments sorted (ASCII)     | ex03/     | ft_sort_params.c            |

---

## 🔧 Compilation Instructions

Compile each exercise individually with:

```bash
gcc -Wall -Wextra -Werror exXX/file.c -o program_name
```

---

## 🧪 Testing Tips

    - Test with different numbers and combinations of arguments  
    
    - Use `cat -e` to visualize line breaks correctly  
    
    - Verify the order and accuracy of the output by comparing with provided examples  
    
    - Test the exercises in environments with empty or special arguments

---

## 📐 Style Guidelines

    - Indent code using tabs instead of spaces  
    
    - Use coherent and descriptive names  
    
    - Only `write` is allowed where permitted  
    
    - Code should be structured, readable, and well-documented

---

## 📌 Recommendations

    - Make frequent and descriptive commits  
    
    - Comment your code, especially in loops and sorting conditions  
    
    - Review examples with varying numbers of arguments  
    
    - Consult documentation on `argc`, `argv`, and `write` to reinforce concepts

---

## 📋 Project Status

| 🧩 Exercise | Folder       | Completed | Submitted | Validation |
|-------------|--------------|-----------|-----------|------------|
| 00          | [ex00](./ex00/) | ✅ Yes  | ✅ Yes  | 100%       |
| 01          | [ex01](./ex01/) | ✅ Yes  | ✅ Yes  | 100%       |
| 02          | [ex02](./ex02/) | ✅ Yes  | ✅ Yes  | 100%       |
| 03          | [ex03](./ex03/) | ✅ Yes  | ✅ Yes  | 100%       |

---

## 📜 License

This project is part of the learning process during the 42 Piscine and is submitted for educational purposes.  
The code may be reused as a personal reference.

---

## 🙋 Author
Developed as part of the intensive C programming challenge during the 42 Piscine.

---

## 📧 Contact
[rmarin-n@student.42barcelona.com](mailto:rmarin-n@student.42barcelona.com)
