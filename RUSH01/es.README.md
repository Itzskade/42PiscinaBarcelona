 # 🏙️ Rush-01: **Skyscraper Puzzle Solver** — Proyecto 42

Este proyecto resuelve un rompecabezas tipo **Skyscraper** de 4×4 usando backtracking.

El objetivo es colocar edificios con alturas del 1 al 4 en una cuadrícula, cumpliendo dos reglas fundamentales:

- Cada fila y columna debe tener números únicos (sin repetir alturas).
- Las pistas dadas desde los bordes indican cuántos edificios son visibles desde esa dirección.

---

## 📁 Estructura del Proyecto

```bash
├── main.c          # Punto de entrada del programa
├── grid.c          # Manejo del tablero: crear, imprimir, liberar
├── solver.c        # Algoritmo de resolución con backtracking
├── check.c         # Validación de pistas visuales
├── utils.c         # Funciones auxiliares como errores e impresión
├── skyscraper.h    # Cabecera con prototipos de funciones
```

---

## 🧠 Flujo del Programa

#### 1️⃣ main.c
        └─ Inicia el programa.
        └─ Llama a parse_input(...) para validar y extraer las 16 pistas.

#### 2️⃣ grid.c
        └─ init_grid(...) reserva memoria para grid[4][4] e inicializa con ceros

#### 3️⃣ solver.c
        └─ solve(...) recorre celda por celda e intenta colocar valores con backtracking
            └─ is_safe(...) verifica que no haya números repetidos en fila/columna
            └─ is_valid_grid(...) comprueba que la cuadrícula respete las pistas
                └─ check_views(...) llama a funciones de check.c

#### 4️⃣ check.c
        └─ check_views(...) llama a:
            ├─ check_row_left(...)    → vista desde la izquierda
            ├─ check_row_right(...)   → vista desde la derecha
            ├─ check_col_up(...)      → vista desde arriba
            └─ check_col_down(...)    → vista desde abajo
                └─ Cada función reconstruye una línea y llama a validate_line(...)

#### 5️⃣ solver.c
        └─ count_visible(...) calcula cuántos edificios se ven en una línea
        └─ validate_line(...) compara el resultado con la pista esperada

#### 6️⃣ grid.c
        └─ print_grid(...) imprime la solución en pantalla si se encuentra

#### 7️⃣ utils.c
        ├─ write_error(...) muestra “Error” si la entrada es inválida o no hay solución
        └─ ft_putchar(...) se usa en impresión de la matriz
#### 8️⃣ grid.c
        └─ free_grid(...) libera la memoria dinámica al final

#### ✅ Final: el programa imprime la solución o muestra “Error” si falla


---

## 📦 Reglas del Juego

    - Cada celda representa la altura de un edificio (valor 1 a 4).
    
    - Desde cada lado del tablero se cuenta cuántos edificios se ven (los más altos bloquean la vista de los más bajos).
    
    - Las pistas (*clues*) indican el número esperado de edificios visibles desde esa dirección.

---


## 📌 Orden de las pistas

| Dirección | Índices en clues[] |
|-----------|--------------------|
| Arriba    | 0  a 3             |
| Abajo     | 4  a 7             |
| Izquierda | 8  a 11            |
| Derecha   | 12 a 15            |

---

## ⚙️ Compilación y Ejecución

```bash
$ gcc *.c -o skyscraper
$ ./skyscraper "4 3 2 1 1 2 2 2 2 2 1 3 3 2 1 2"
```

---

## ✅ Resultado esperado

    - Si el tablero es válido, se imprime la solución en consola, mostrando la matriz 4x4 con los números del 1 al 4.
```
1 2 3 4
4 3 2 1
2 1 4 3
3 4 1 2
```
    - Si hay error en la entrada o no se encuentra solución, se muestra “Error”.

---

## 📜 Licencia

Este proyecto es parte del proceso de aprendizaje en la Piscine 42 y se entrega con fines educativos. 

Puedes reutilizar el código con fines personales o como referencia.

---

## 🙋 Autor
Desarrollado como parte del reto intensivo de programación en lenguaje C durante la Piscine 42.

---

## 📧 Contacto
[rmarin-n@student.42barcelona.com](mailto:rmarin-n@student.42barcelona.com)

