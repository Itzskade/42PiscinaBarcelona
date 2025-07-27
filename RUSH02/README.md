# 📘 Proyecto Rush 02 - Conversor de Números a Palabras

Este proyecto convierte un número dado como argumento en palabras en inglés, usando un archivo de diccionario personalizado.

---

## 🚀 ¿Cómo funciona el programa?

### ✅ Entrada del usuario

```bash
./rush02 [diccionario_opcional] número
```

- Si se pasa solo un número: usa por defecto `numbers.dict`.
- Si se pasa un diccionario y un número: usa ese diccionario.

---


# 🧠 Explicación Detallada

Este proyecto convierte un número numérico (como `"123456"`) en su forma escrita en inglés (como `"one hundred twenty-three thousand four hundred fifty-six"`), usando un diccionario (`.dict`) personalizado.

---

## 🔁 Flujo General del Programa

### Punto de entrada: `main.c`

El programa comienza en la función principal `main`, que sigue estos pasos:

1. **Validar argumentos**  
   Llama a `validate_args(argc, argv)` para comprobar que la entrada es correcta:  
   - Si recibe dos argumentos (`./rush02 número`), usará el diccionario por defecto `"numbers.dict"`.  
   - Si recibe tres argumentos (`./rush02 diccionario número`), usará el diccionario personalizado indicado.

2. **Cargar diccionario**  
   Llama a `load_dictionary(dict_file)` para:  
   - Abrir el archivo del diccionario.  
   - Leer todo su contenido con `read_file(dict_file)`.  
   - Separar el texto en líneas con `split_lines(content)`.  
   - Analizar cada línea con `parse_line(line, &key, &value)`.  
   - Guardar cada par clave-valor en una estructura interna (array de `t_dict`) con `fill_dict(dict, lines, count)`.

3. **Validar número de entrada**  
   Usa `validate_number_input(number_str)` para asegurarse de que el número contiene solo dígitos.

4. **Procesar número**  
   Llama a `process_number(dict, dict_size, number_str)` que:  
   - Divide el número en tripletes (grupos de tres cifras) empezando desde la derecha.  
   - Para cada triplete, llama a `process_triplet(dict, dict_size, triplet)` que:  
     - Convierte centenas, decenas y unidades en palabras (por ejemplo, `123` → “one hundred twenty-three”).  
     - Dentro de `process_triplet`, se llaman funciones como `process_hundreds`, `process_tens_units`, `process_teens`, `process_tens` y `process_units` para cada parte.  
   - Después de cada triplete, imprime la escala correspondiente (mil, millón, etc.) usando `print_scale_name(dict, dict_size, index_triplet)`.

5. **Mostrar resultado**  
   Todo el texto generado se imprime en pantalla como la representación completa del número en palabras.

6. **Liberar memoria**  
   Llama a funciones como `free_dict(dict, dict_size)` y `free_lines(lines, count)` para liberar toda la memoria dinámica usada y evitar pérdidas.

---

### Resumen simplificado con funciones clave:

| Paso                         | Función principal                       | Descripción breve                                       |
|------------------------------|---------------------------------------|---------------------------------------------------------|
| Validar argumentos            | `validate_args(argc, argv)`            | Verifica que la entrada sea correcta                     |
| Leer diccionario              | `load_dictionary(dict_file)`            | Lee y procesa el archivo del diccionario                 |
| Validar número                | `validate_number_input(number_str)`    | Asegura que el número contiene solo dígitos              |
| Procesar número y tripletes   | `process_number(dict, size, number)`   | Divide y convierte cada triplete a palabras               |
| Procesar cada triplete        | `process_triplet(dict, size, triplet)` | Convierte centenas, decenas y unidades                    |
| Imprimir escala               | `print_scale_name(dict, size, index)`  | Imprime “thousand”, “million”, etc. según el triplete    |
| Liberar memoria              | `free_dict(dict, size)`, `free_lines`  | Limpia la memoria dinámica para evitar fugas             |
---

## 📁 Archivos y Funciones

### `utils.c`

#### `ft_strlen(str)`
Cuenta cuántos caracteres tiene un string.

#### `ft_strdup(src)`
Crea una copia nueva de un string (`malloc` y copia letra a letra).

#### `ft_substr(str, start, len)`
Extrae una parte del string desde la posición `start` con longitud `len`.

#### `ft_strcmp(s1, s2)`
Compara dos strings. Devuelve 0 si son iguales.

#### `is_valid_number(str)`
Verifica si el string contiene solo dígitos del 0 al 9.

---

### `utils2.c`

#### `ft_strncpy(dest, src, n)`
Copia los primeros `n` caracteres de `src` en `dest`.

#### `ft_bzero(s, n)`
**Importante**: Esta función pone todos los bytes del bloque `s` a cero (básicamente limpia la memoria). Se usa para evitar basura en la memoria.

---

### `read_file.c`

#### `read_file(dict_file)`
Abre y lee el archivo entero al buffer. Usa `read()` y `open()`. Almacena el contenido en un string.

---

### `split_lines.c`

#### `count_lines(str)`
Cuenta cuántas líneas tiene el archivo (cuántos `
` hay).

#### `split_lines(str)`
Separa el contenido del archivo en líneas usando `
`. Cada línea es una entrada del diccionario.

#### `free_lines(lines, count)`
Libera la memoria de todas las líneas.

---

### `parse_line.c`

#### `skip_whitespace(str, i)`
Salta todos los espacios o tabulaciones desde una posición `i`.

#### `extract_key(line, &pos)`
Extrae la parte antes de los dos puntos `:` como clave (key).

#### `extract_value(line, pos)`
Extrae la parte después de los dos puntos como valor.

#### `parse_line(line, &key, &value)`
Divide una línea en `key: value`, manejando errores si no hay `:` o memoria.

---

### `dict.c`

#### `load_dict(dict_file, &size)`
Carga y guarda el diccionario entero:
1. Llama a `read_file`.
2. Llama a `split_lines`.
3. Llama a `fill_dict` para analizar línea por línea y guardar las claves/valores.

#### `fill_dict(dict, lines, lines_count)`
Usa `parse_line` para llenar el array de diccionario `dict[]`.

#### `find_value_from_key(dict, size, key)`
Busca el valor correspondiente a una clave en el diccionario.

#### `free_dict(dict, size)`
Libera memoria de cada clave y valor.

---

### `scale.c`

#### `get_zeros_count(index)`
Devuelve cuántos ceros hay en una escala: `index 1` → "1000", `index 2` → "1000000"...

#### `get_scale_key(index)`
Devuelve el string "1000", "1000000", etc., para buscar en el diccionario la palabra "thousand", "million"...

---

### `process_triplet.c`

Procesa bloques de 3 cifras, por ejemplo "123", "456", etc.

#### `process_triplet(dict, size, triplet)`
Convierte un triplete de número (como "123") en palabras:
1. Si hay centenas → busca el número y la palabra "hundred".
2. Llama a `process_tens_units`.

#### `process_tens_units(dict, size, triplet)`
Llama a:
- `process_teens` si es un número entre 11 y 19.
- `process_tens` para decenas (como 20, 30...).
- `process_units` para unidades (como 1, 2... si no era teen).

#### `process_teens(dict, size, triplet)`
Forma el número con los dígitos de las decenas y unidades (ej: "13") y busca su palabra.

#### `process_tens(dict, size, triplet)`
Busca decenas como "20", "30", etc.

#### `process_units(dict, size, triplet)`
Busca unidades como "1", "2", etc.

---

### `process_number.c`

#### `print_value(value)`
Imprime una palabra y un espacio.

#### `print_scale_name(dict, size, index)`
Convierte index → "1000", "1000000", etc., y busca "thousand", "million"...

> Esta función se llama desde `process_number` para imprimir las escalas correctas tras cada triplete.

---

## 📌 Resumen del Flujo Completo

1. **Entrada**: Se recibe un número como string y opcionalmente un archivo `.dict`.
2. **`main`** valida argumentos y lee el diccionario.
3. El contenido del archivo se **lee** y **divide en líneas**.
4. Cada línea se analiza como `key: value` y se guarda en una estructura `t_dict`.
5. El número se divide en tripletes.
6. Cada triplete pasa por `process_triplet`, que imprime cientos, decenas y unidades.
7. Al final de cada triplete, se imprime la **escala** correspondiente ("thousand", "million"...).
8. Se imprime el resultado final en pantalla.

---

## 🧠 Ejemplo

```
Input: 1234567

Tripletes: ["001", "234", "567"]
(1) → one million
(234) → two hundred thirty-four thousand
(567) → five hundred sixty-seven
```

---

## 🧹 Limpieza y Memoria

- `malloc` se usa en muchos sitios → Siempre que se crea memoria dinámica, hay que liberar con `free`.
- `ft_bzero` limpia buffers para evitar basura.
- `free_dict`, `free_lines` aseguran que no haya **memory leaks**.

---

## ✅ Validaciones

- Si el archivo no existe → "Dict Error"
- Si el número no es válido → "Error"
- Si una línea del diccionario está mal → simplemente se ignora

---

## 🛠️ Makefile

Usa:

```bash
make       # Compila el programa
make clean # Borra los .o
make fclean # Borra binario y .o
make re    # Limpia y recompila
```

---

## 📁 Archivos principales

| Archivo | Descripción |
|--------|-------------|
| `main.c` | Punto de entrada y control del flujo |
| `dict.c` | Carga y gestión del diccionario |
| `process_number.c` | Procesa los grupos de 3 cifras |
| `process_triplet.c` | Convierte tripletas en palabras |
| `scale.c` | Manejo de escalas como mil, millón |
| `utils.c` `utils2.c` | Funciones auxiliares |
| `split_lines.c`, `parse_line.c`, `read_file.c` | Lectura y procesamiento del archivo |
| `structs.h` | Declaración de estructuras y funciones |
| `Makefile` | Compilación |
