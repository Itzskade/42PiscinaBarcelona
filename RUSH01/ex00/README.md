
# 🏙️ Rush-01: **Skyscraper Puzzle Solver**

Este proyecto implementa un **algoritmo de backtracking** para resolver un puzzle tipo *Skyscraper* en una cuadrícula 4x4, utilizando 16 pistas visuales (*clues*) que determinan la visibilidad desde los bordes.

---

## 🧠 ¿Qué es el puzzle Skyscraper?

Dado un tablero 4x4 vacío, el objetivo es rellenarlo con números del 1 al 4 (representando rascacielos de distintas alturas) cumpliendo las siguientes reglas:

- No se repiten números en ninguna fila ni columna.
- Las pistas externas (*clues*) indican cuántos edificios son visibles desde un lado específico.
  - Un edificio tapa a los más bajos que estén detrás.
  - Ejemplo: `2 3 4 1` desde la izquierda → se ven 3 edificios (2, 3, 4).

---

## ⚙️ Compilación y Ejecución

```bash
$ gcc *.c -o skyscraper
$ ./skyscraper "4 3 2 1 1 2 2 2 2 2 1 3 3 2 1 2"
```

---

## 🧩 Arquitectura del Proyecto

### 🗂️ Archivos Clave

| Archivo              | Propósito                                              |
|----------------------|--------------------------------------------------------|
| `main.c`             | Entrada principal del programa                         |
| `read_clues.c`       | Convierte el input en 16 pistas válidas                |
| `init.c`             | Inicializa, imprime y libera la cuadrícula             |
| `solver.c`           | Resuelve el tablero usando backtracking                |
| `check.c`            | Verifica valores y si el tablero es válido             |
| `views.c`            | Comprueba que se cumplan las reglas de visibilidad     |
| `utils.c`            | Funciones auxiliares (como contar visibilidad)         |

---

## 🔁 Flujo de Ejecución

### 1. `main()`

- Valida los argumentos.
- Llama a `read_clues()` para transformar la cadena de entrada en un array de 16 enteros.
- Inicializa la cuadrícula 4x4 con `init_grid()`.
- Ejecuta el algoritmo de resolución (`solve()`).
- Si hay solución válida, imprime el resultado.
- Siempre libera la memoria con `free_grid()`.

---

## 📥 Lectura de Pistas

### 2. `read_clues(char *str, int *clues)`

- Extrae los números del `argv[1]`.
- Ignora espacios.
- Verifica que haya exactamente 16 números entre `1` y `4`.
- Si el formato es incorrecto, retorna error.

---

## 🧱 Manejo de la Cuadrícula

### 3. `init_grid(int ***grid)`

- Reserva memoria dinámicamente para una matriz 4x4.
- Inicializa todos los valores a `0`.

### 4. `print_grid(int **grid)`

- Imprime la cuadrícula en formato legible.

### 5. `free_grid(int **grid, int limit)`

- Libera la memoria de forma segura en caso de error o al terminar.

---

## 🧠 Algoritmo de Resolución

### 6. `solve(int **grid, int row, int col, int *clues)`

- Algoritmo **backtracking** recursivo.
- Recorre la cuadrícula celda por celda.
- Intenta colocar un número del 1 al 4.
- Verifica que el número no se repita en su fila ni columna con `is_safe()`.
- Si se completa la cuadrícula, llama a `is_valid_grid()` para confirmar que respeta las pistas.
- Retrocede (backtrack) si no hay solución válida desde ese punto.

---

## 🔐 Validaciones

### 7. `is_safe(int **grid, int row, int col, int num)`

- Verifica si el número ya existe en la fila o la columna.

### 8. `is_valid_grid(int **grid, int *clues)`

- Verifica que el tablero esté completo (sin ceros).
- Llama a `check_views()` para comprobar todas las pistas.

---

## 👁️ Comprobación de Pistas Visuales

### 9. `check_views(int **grid, int *clues)`

- Evalúa si las vistas desde cada lado coinciden con las pistas:

  - `check_row_left()`: filas de izquierda a derecha  
  - `check_row_right()`: filas de derecha a izquierda  
  - `check_col_up()`: columnas de arriba hacia abajo  
  - `check_col_down()`: columnas de abajo hacia arriba  

- Cada función extrae la línea correspondiente y la pasa a `validate_line()`.

---

## 📏 Validación de Visibilidad

### 10. `validate_line(int *line, int clue)`

- Recibe un array de 4 números y una pista.
- Si la línea tiene ceros (vacía), retorna `1` (válido por ahora).
- Si la pista es `0`, no se exige validación.
- Llama a `count_visible()` para contar cuántos edificios se ven desde el inicio del array.
- Compara el resultado con el `clue`.

---

### 11. `count_visible(int *line)`

- Recorre la línea de izquierda a derecha.
- Cada vez que encuentra un edificio más alto que todos los anteriores, aumenta el contador.
- Ejemplo: `{2, 3, 4, 1}` → visibles: 3.

---

## 🧪 Ejemplo de Ejecución

Input:
```bash
./skyscraper "4 3 2 1 1 2 2 2 2 2 1 3 3 2 1 2"
```

Salida esperada:
```
1 2 3 4
4 3 2 1
2 1 4 3
3 4 1 2
```

---

## 🧼 Gestión de Errores

- Si hay errores en la entrada, pistas mal formateadas o memoria mal asignada, el programa imprime `"Error
"` y sale limpiamente.
