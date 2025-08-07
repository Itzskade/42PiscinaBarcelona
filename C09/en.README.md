# 💡 Project C Piscine C 09

This repository contains all the exercises for **C Piscine C 09**, focused on library creation, Makefile automation, and advanced string manipulation in the C language.

All exercises have been successfully completed.

---

## 🎯 Project Objectives

- Create a custom C library (`libft.a`)
- Automate compilation using a Makefile following best practices
- Implement basic functions without using standard library functions
- Dynamically split strings using custom separators
- Comply with Norminette style guidelines

---

## 📁 Exercise Table

| Exercise | Description                                              | Directory | Deliverable Files                                                                 |
|----------|----------------------------------------------------------|-----------|------------------------------------------------------------------------------------|
| 00       | Create `libft.a` library with basic functions            | `ex00/`   | `libft_creator.sh`, `ft_putchar.c`, `ft_swap.c`, `ft_putstr.c`, `ft_strlen.c`, `ft_strcmp.c` |
| 01       | Makefile to compile `libft.a` with normative rules       | `ex01/`   | `Makefile`                                                                        |
| 02       | `ft_split` function to split strings by separators       | `ex02/`   | `ft_split.c`                                                                      |

---

## 🔧 Compilation Instructions

### Exercise 00

```bash
sh libft_creator.sh
```

---

## 🧪 Testing Tips

    - Verify that libft.a is correctly created and contains all functions.

    - Make sure the Makefile does not compile unnecessary files.

    - Test ft_split with varied strings and multiple separators.

    - Use valgrind to detect memory leaks in ft_split.

    - Check that .o files are in the same directory as their .c sources.

---

## 📐 Style Guidelines

    - Indent code using tabs instead of spaces.

    - Use clear and descriptive names for your functions and variables.

    - Write modular, clean, and well-commented code.

    - Pass Norminette without exceptions.

---

📌 Recommendations

    - Make frequent commits to track your progress.

    - Add comments explaining the use of functions and structures.

    - Review documentation on Makefiles and string manipulation.

    - Use helper functions to keep your code organized.

---

## 📋 Project Status

| 🧩 Exercise | Link     | Completed | Submitted | Validation |
|------------|----------|-----------|-----------|------------|
| 00         | [ex00](./ex00/) | ✅ Yes   | ✅ Yes   | 100%       |
| 01         | [ex01](./ex01/) | ✅ Yes   | ✅ Yes   | 100%       |
| 02         | [ex02](./ex02/) | ✅ Yes   | ✅ Yes   | 100%       |

---

## 📜 License

This project is part of the learning process during the 42 Barcelona Piscine and is submitted for educational purposes.

The code may be used as a personal reference.

---

##🙋 Author

Developed as part of the intensive C programming challenge during the 42 Piscine.

---

## 📧 Contact

[rmarin-n@student.42barcelona.com](mailto:rmarin-n@student.42barcelona.com)
