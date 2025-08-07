# 💻 Project C00

This repository contains the exercises for **Project C00**, one of the first blocks in learning the C language during the 42 Piscine. The main goal is to master basic syntax, sequential programming logic, and proper use of functions, loops, conditions, and character handling.

---

## 🎯 Project Objectives

- Get familiar with writing functions in C  
- Apply conditions, loops, and simple structures  
- Learn to print to the terminal using `write`  
- Understand sequential execution and logical flow  
- Follow Norminette style standards

---

## ❕ Technical Requirements

- Only the `write()` function is allowed  
- Standard functions like `printf`, `puts`, etc. are not permitted  
- Norminette-friendly code: tab indentation, coherent naming, syntactic clarity  
- Each function must follow the prototype specified in the exercise  
- All exercises must compile with `gcc -Wall -Wextra -Werror`

---

## 📁 Exercise Table

| Exercise | Description                                                   | Directory | Deliverable File             |
|----------|---------------------------------------------------------------|-----------|-------------------------------|
| 00       | Display a character using `write`                             | ex00/     | `ft_putchar.c`                |
| 01       | Display the lowercase alphabet in ascending order             | ex01/     | `ft_print_alphabet.c`         |
| 02       | Display the lowercase alphabet in descending order            | ex02/     | `ft_print_reverse_alphabet.c` |
| 03       | Display all digits from 0 to 9                                | ex03/     | `ft_print_numbers.c`          |
| 04       | Display “P” or “N” depending on the sign of an integer        | ex04/     | `ft_is_negative.c`            |
| 05       | Display all combinations of three distinct digits             | ex05/     | `ft_print_comb.c`             |
| 06       | Display combinations of two numbers from 00 to 99             | ex06/     | `ft_print_comb2.c`            |
| 07       | Display any integer using `write`                             | ex07/     | `ft_putnbr.c`                 |
| 08       | Display combinations of `n` digits in ascending order         | ex08/     | `ft_print_combn.c`            |

---

## 🔧 Compilation Instructions

Compile each exercise individually with:

```bash
gcc -Wall -Wextra -Werror exXX/file.c -o program_name
```

---

## 🧪 Testing Tips
Test with empty strings, long strings, and special characters

Use valgrind to check for memory leaks if applicable

Verify expected output using echo $? or by comparing with standard functions


---

## 📐 Style Guidelines
Indent code using tabs instead of spaces

Use coherent and descriptive names

No external functions allowed, except write where permitted

Clear and readable structure in each function

---

## 📌 Recommendations
Make frequent and descriptive commits

Use man write to fully understand the authorized function

Follow Norminette rules from the beginning

Test your functions with various values, including edge cases

If you're stuck, collaborate and ask — peer-to-peer support is key

---

## 📜 License
This project is part of the learning process during the 42 Piscine and is submitted for educational purposes. You may reuse the code for personal use or as reference.

---

## 🙋 Author
Developed as part of the intensive C programming challenge during the 42 Piscine.

📧 Contact: rmarin-n@student.42barcelona.com
