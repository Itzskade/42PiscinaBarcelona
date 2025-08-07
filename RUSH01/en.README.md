# 🏙️ Rush-01: **Skyscraper Puzzle Solver** — 42 Project

This project solves a 4×4 **Skyscraper** puzzle using backtracking.

The goal is to place buildings with heights from 1 to 4 in a grid, following two fundamental rules:

- Each row and column must contain unique numbers (no repeated heights).
- Clues given from the edges indicate how many buildings are visible from that direction.

---

## 📁 Project Structure

```bash
├── main.c          # Program entry point
├── grid.c          # Grid management: create, print, free
├── solver.c        # Backtracking solving algorithm
├── check.c         # Clue validation logic
├── utils.c         # Helper functions: error handling, printing
├── skyscraper.h    # Header with function prototypes
```

---

## 🧠 Program Flow

1️⃣ main.c
    └─ Starts the program.
    └─ Calls parse_input(...) to validate and extract the 16 clues.

2️⃣ grid.c
    └─ init_grid(...) allocates memory for grid[4][4] and initializes it to zero

3️⃣ solver.c
    └─ solve(...) iterates cell by cell and tries values using backtracking
        └─ is_safe(...) checks for duplicates in row/column
        └─ is_valid_grid(...) ensures the grid respects the clues
            └─ check_views(...) calls functions from check.c

4️⃣ check.c
    └─ check_views(...) calls:
        ├─ check_row_left(...)    → view from the left
        ├─ check_row_right(...)   → view from the right
        ├─ check_col_up(...)      → view from the top
        └─ check_col_down(...)    → view from the bottom
            └─ Each function reconstructs a line and calls validate_line(...)

5️⃣ solver.c
    └─ count_visible(...) calculates how many buildings are visible in a line
    └─ validate_line(...) compares result with expected clue

6️⃣ grid.c
    └─ print_grid(...) prints the solution if found

7️⃣ utils.c
    ├─ write_error(...) displays “Error” if input is invalid or no solution exists
    └─ ft_putchar(...) used for matrix printing

8️⃣ grid.c
    └─ free_grid(...) frees dynamic memory at the end

✅ Final: the program prints the solution or shows “Error” if it fails

---

## 📦 Game Rules

    - Each cell represents the height of a building (value from 1 to 4).
    
    - From each side of the grid, count how many buildings are visible (taller ones block the view of shorter ones).
    
    - Clues indicate the expected number of visible buildings from each direction.

---

## ⚙️ Compilation & Execution
```bash
$ gcc *.c -o skyscraper
$ ./skyscraper "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
```

## Expected Output

1 2 3 4
4 3 2 1
2 1 4 3
3 4 1 2


## ✅ Expected Result
    - If the grid is valid, the solution is printed to the console as a 4x4 matrix with numbers from 1 to 4.
```
1 2 3 4
4 3 2 1
2 1 4 3
3 4 1 2
```
    - If there's an input error or no solution is found, “Error” is displayed.
 
---

## 📜 License

This project is part of the learning process during the 42 Piscine and is submitted for educational purposes. 

You may reuse the code for personal reference or learning

---

## 🙋 Author

Developed as part of the intensive C programming challenge during the 42 Piscine.

---

## 📧 Contact

[rmarin-n@student.42barcelona.com](mailto:rmarin-n@student.42barcelona.com)
