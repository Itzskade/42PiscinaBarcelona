# 📘 Rush 02 Project – Number to Words Converter

This project converts a given number (as an argument) into its English word representation using a custom dictionary file.

---

## 🧠 Detailed Explanation

The program takes a numeric string (like `"123456"`) and converts it into its written form in English (like `"one hundred twenty-three thousand four hundred fifty-six"`), using a `.dict` file.

---

## 🔁 General Program Flow

### Entry Point: `main.c`

The program starts in the `main` function and follows these steps:

1. **Validate arguments**  
   `validate_args(argc, argv, &dict_file, &number)` checks if 2 or 3 arguments were passed.

2. **Load dictionary**  
   Calls `load_dictionary(dict_file, &dict, &size)`:
   - Opens and reads the file using `read_file`
   - Splits content into lines with `split_lines`
   - Parses each line using `parse_line`
   - Fills the `dict` array with key-value pairs via `fill_dict`

3. **Validate input number**  
   Uses `validate_number_input(number)` and `is_valid_number()`

4. **Process number**  
   Calls `process_number(dict, size, number)`:
   - Splits the number into triplets (right to left)
   - Converts each triplet using `process_triplet`
   - Adds scale suffixes using `print_scale_name`

5. **Display result**  
   The full word representation is printed to the console.

6. **Free memory**  
   Calls `free_dict(dict, dict_size)` and `free_lines(lines, count)` to clean up all dynamic memory.

---

### Simplified Summary with Key Functions

| Step                      | Main Function                          | Description                                      |
|---------------------------|----------------------------------------|--------------------------------------------------|
| Validate arguments        | `validate_args(argc, argv)`            | Checks if input is correct                       |
| Read dictionary           | `load_dictionary(dict_file)`           | Reads and processes the dictionary file          |
| Validate number           | `validate_number_input(number_str)`    | Ensures the number contains only digits          |
| Process number & triplets | `process_number(dict, size, number)`   | Splits and converts each triplet to words        |
| Process each triplet      | `process_triplet(dict, size, triplet)` | Converts hundreds, tens, and units               |
| Print scale               | `print_scale_name(dict, size, index)`  | Prints “thousand”, “million”, etc.               |
| Free memory               | `free_dict(dict, size)`, `free_lines`  | Cleans up dynamic memory                         |

---

## 📁 Files and Functions

### `structs.h` – Declaration of `s_dict` Structure

```c
#ifndef STRUCTS_H
# define STRUCTS_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_dict
{
    char    *key;   // Key (number as string)
    char    *value; // Value (word representing the number)
}   t_dict;

#endif
```

---

## 📁 Files and Functions

### `utils.c`

#### `ft_strlen(str)`
Counts the number of characters in a string.

#### `ft_strdup(src)`
Creates a new copy of a string (`malloc` and character-by-character copy).

#### `ft_substr(str, start, len)`
Extracts a substring from position `start` with length `len`.

#### `ft_strcmp(s1, s2)`
Compares two strings. Returns 0 if they are equal.

#### `ft_strncpy(dest, src, n)`
Copies the first `n` characters from `src` into `dest`.

---

### `utils2.c`

#### `is_valid_number(str)`
Checks if the string contains only digits from 0 to 9.

#### `pad_triplet(char *triplet)`
Formats the triplet to ensure it has 3 digits, adding leading zeros if needed.

#### `is_zero_triplet(char *triplet)`
Checks if the triplet is exactly "000", indicating a zero-value triplet.

---

### `read_file.c`

#### `read_file(dict_file)`
Opens and reads the entire file into a buffer using `read()` and `open()`. Stores the content as a string.

---

### `split_lines.c`

#### `count_lines(str)`
Counts how many lines are in the file (number of `\n` characters).

#### `split_lines(str)`
Splits the file content into lines using `\n`. Each line becomes a dictionary entry.

#### `free_lines(lines, count)`
Frees the memory of all lines.

---

### `parse_line.c`

#### `skip_whitespace(str, i)`
Skips all spaces or tabs starting from position `i`.

#### `extract_key(line, &pos)`
Extracts the part before the colon `:` as the key.

#### `extract_value(line, pos)`
Extracts the part after the colon as the value.

#### `parse_line(line, &key, &value)`
Splits a line into `key: value`, handling errors if `:` is missing or memory fails.

---

### `dict.c`

#### `load_dict(dict_file, &size)`
Loads and stores the entire dictionary:
1. Calls `read_file`
2. Calls `split_lines`
3. Calls `fill_dict` to parse each line and store key-value pairs

#### `fill_dict(dict, lines, lines_count)`
Uses `parse_line` to populate the dictionary array `dict[]`.

#### `find_value_from_key(dict, size, key)`
Finds the value corresponding to a key in the dictionary.

#### `free_dict(dict, size)`
Frees memory for each key and value.

---

### `scale.c`

#### `get_zeros_count(index)`
Returns the number of zeros in a scale: `index 1` → "1000", `index 2` → "1000000", etc.

#### `get_scale_key(index)`
Returns the string "1000", "1000000", etc., to look up "thousand", "million", etc. in the dictionary.

---

### `process_triplet.c`

Processes blocks of 3 digits, such as "123", "456", etc.

#### `process_triplet(dict, size, triplet)`
Converts a numeric triplet (like "123") into words:
1. If hundreds exist → looks up the number and the word "hundred"
2. Calls `process_tens_units`

#### `process_tens_units(dict, size, triplet)`
Calls:
- `process_teens` for numbers between 11 and 19
- `process_tens` for tens like 20, 30...
- `process_units` for units like 1, 2... if not a teen

#### `process_teens(dict, size, triplet)`
Forms the number from the tens and units digits (e.g., "13") and looks up its word.

#### `process_tens(dict, size, triplet)`
Looks up tens like "20", "30", etc.

#### `process_units(dict, size, triplet)`
Looks up units like "1", "2", etc.

---

### `process_number.c`

#### `print_value(value)`
Prints a word followed by a space.

#### `process_number(t_dict *dict, int size, char *number)`
Converts the full number into words by splitting it into triplets.

#### `print_scale_name(dict, size, index)`
Converts index → "1000", "1000000", etc., and looks up "thousand", "million", etc.

---

## 📌 Full Flow Summary

1. **Input**: A number as a string and optionally a `.dict` file.
2. `main` validates arguments and reads the dictionary.
3. The file content is **read** and **split into lines**.
4. Each line is parsed as `key: value` and stored in a `t_dict` structure.
5. The number is split into triplets.
6. Each triplet is processed by `process_triplet`, which prints hundreds, tens, and units.
7. After each triplet, the corresponding **scale** is printed ("thousand", "million"...).
8. The final result is printed to the console.

---

## 🧠 Example


```
Input: 1234567

Triplets: ["001", "234", "567"]
(1) → one million
(234) → two hundred thirty-four thousand
(567) → five hundred sixty-seven
```

---

## 🧹 Memory Management

- `malloc` is used in many places → Every time dynamic memory is allocated, it must be freed using `free`.
  
- `ft_bzero` clears buffers to avoid garbage values.
  
- `free_dict`, `free_lines` ensure there are no **memory leaks**.

---

## ⚠️ Validations and Errors

```text
❌ Invalid number → Error

❌ Dictionary not found → Dict Error

❌ Malformed lines → Ignored
```

---

## 🛠️ Makefile

Usage:
```bash
make        # Compiles the program
make clean  # Removes .o files
make fclean # Removes binary and .o files
make re     # Cleans and recompiles
```

---

## 📁 Main Files

| File                                          | Description                          |
|-----------------------------------------------|--------------------------------------|
| `main.c`                                      | Entry point and flow control         |
| `dict.c`                                      | Dictionary loading and management    |
| `process_number.c`                            | Processes groups of 3 digits         |
| `process_triplet.c`                           | Converts triplets into words         |
| `scale.c`                                     | Handles scales like thousand/million |
| `utils.c`, `utils2.c`                         | Helper functions                     |
| `split_lines.c`, `parse_line.c`, `read_file.c`| File reading and parsing             |
| `structs.h`                                   | Structure and function declarations  |
| `Makefile`                                    | Compilation rules                    |

---

## 📜 License

This project is part of the learning process during the 42 Piscine and is submitted for educational purposes.  
You may reuse the code for personal reference or learning.

---

## 🙋 Author

Developed as part of the intensive C programming challenge during the 42 Piscine.

---

## 📧 Contact

[rmarin-n@student.42barcelona.com](mailto:rmarin-n@student.42barcelona.com)

