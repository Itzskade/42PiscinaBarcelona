# 📐 Project RUSH00

This repository includes solutions for the **Rush00** to **Rush04** projects, developed as part of the intensive C Piscine program.

Each Rush consists of implementing a `rush(x, y)` function that prints a rectangular figure of size `x` by `y` using a unique character pattern depending on the Rush number.

---

## 🎯 Project Objectives

- Design geometric structures through code  
- Apply precise conditional logic to handle corners, edges, and inner spaces  
- Work with custom functions and modular structure (`main.c`, `ft_putchar.c`, `rush0X.c`)  
- Use nested loops with coordinate control  
- Ensure correct output for various input values  

---

## 📁 Exercise Structure

| Rush   | Description                                 | Directory | Deliverable Files                      |
|--------|---------------------------------------------|-----------|----------------------------------------|
| Rush00 | Draw rectangle using `o`, `-`, `|`          | ex00/     | `main.c`, `ft_putchar.c`, `rush00.c`   |
| Rush01 | Rectangle using `/`, `\`, `*`               | ex00/     | `main.c`, `ft_putchar.c`, `rush01.c`   |
| Rush02 | Rectangle using `A`, `B`, `C`               | ex00/     | `main.c`, `ft_putchar.c`, `rush02.c`   |
| Rush03 | Rectangle using `A`, `B`, `C`               | ex00/     | `main.c`, `ft_putchar.c`, `rush03.c`   |
| Rush04 | Rectangle using `A`, `B`, `C`               | ex00/     | `main.c`, `ft_putchar.c`, `rush04.c`   |

---

## 🔧 Technical Conditions

- All files are compiled together using:  
  `gcc -Wall -Wextra -Werror main.c rush0X.c ft_putchar.c`  
- Only the `write()` function is allowed  
- Code must comply with Norminette rules  
- The main function must follow this structure:

```c
int main(void)
{
    rush(5, 5);
    return (0);
}
```
During evaluation, main.c will be modified to test different combinations such as rush(1, 1), rush(5, 3), rush(123, 42), etc.

---

## 📌 Recommendations
    - Visually evaluate each position (x, y) to decide which character to print

    - Use separate conditions for corners, horizontal/vertical borders, and inner space

    - Test with small, extreme, and asymmetric values

    - Follow style rules from the beginning to avoid later corrections

    - Focus on logic before optimizing visual layout

---

## 📋 Project Status

| 🧩 Rush   | Link     | Completed | Submitted | Validation |
|----------|----------|-----------|-----------|------------|
| Rush00   | [Rush00](./Rush00) | ✅ Yes   | ✅ Yes   | 100%       |
| Rush01   | [Rush01](./Rush01) | ✅ Yes   | ✅ Yes   | 100%       |
| Rush02   | [Rush02](./Rush02) | ✅ Yes   | ✅ Yes   | 100%       |
| Rush03   | [Rush03](./Rush03) | ✅ Yes   | ✅ Yes   | 100%       |
| Rush04   | [Rush04](./Rush04) | ✅ Yes   | ✅ Yes   | 100%       |

---

## 📜 License

This project is part of the learning process during the 42 Piscine and is submitted for educational purposes. You may reuse the code for personal reference or learning.

---

## 🙋 Author

Developed as part of the intensive C programming challenge during the 42 Piscine.


---

## 📧 Contact

[rmarin-n@student.42barcelona.com](mailto:rmarin-n@student.42barcelona.com)
