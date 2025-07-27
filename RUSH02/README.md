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

## 🧠 Flujo general del programa (Archivo `main.c`)

```c
int main(int argc, char **argv)
```

### 1. Validar argumentos: `validate_args`
- Comprueba si se ha pasado 1 o 2 argumentos válidos.
- Si no: muestra `Error`.

### 2. Cargar el diccionario: `load_dictionary`
- Llama a `load_dict` → que lee, divide y guarda las líneas del archivo en estructura.
- Si falla: muestra `Dict Error`.

### 3. Validar el número: `validate_number_input`
- Usa `is_valid_number` para comprobar si el input contiene solo dígitos.

### 4. Procesar número: `process_number`
- Divide el número en grupos de 3 cifras.
- Por cada tripleta: llama a `process_triplet` y si corresponde, a `print_scale_name` para decir "mil", "millón", etc.

---

## 🧱 Desglose por funcionalidades

### 📂 Diccionario (`dict.c`)

#### `load_dict`
1. Llama a `read_file`: lee todo el contenido del archivo.
2. Llama a `split_lines`: divide el archivo por líneas.
3. Llama a `fill_dict`: procesa cada línea válida del tipo `123 : one hundred twenty-three`.
4. Devuelve un array de estructuras (`t_dict`) con clave y valor.

#### `find_value_from_key`
- Busca un valor a partir de una clave (por ejemplo, clave `100` → valor `hundred`).

#### `free_dict`
- Libera la memoria del diccionario.

### 📄 Lectura de archivo (`read_file.c`)

#### `read_file`
- Abre el archivo, lee todo el contenido en un buffer, y lo guarda en una string.

### 🔍 Separación de líneas (`split_lines.c`)

#### `split_lines`
- Llama a `count_lines` → cuenta los saltos de línea.
- Llama a `fill_split` → extrae cada línea con `copy_line`.

#### `free_lines`
- Libera todas las líneas en caso de error.

### 📌 Parseo de líneas (`parse_line.c`)

#### `parse_line`
- Usa `extract_key` y `extract_value` para extraer la parte antes y después de `:` de cada línea.
- Elimina espacios.

### 🔠 Utilidades (`utils.c` y `utils2.c`)

Funciones comunes como:
- `ft_strlen`, `ft_strdup`, `ft_strcmp` → para manejar strings.
- `ft_strncpy`, `ft_bzero` → para copiar y limpiar datos.

### 🔢 Escalas (`scale.c`)

#### `get_scale_key`
- Recibe un índice (0: unidades, 1: mil, 2: millón…).
- Devuelve la clave del diccionario correspondiente: `"1000"`, `"1000000"`, etc.

### 🔁 Procesar número (`process_number.c`)

#### `print_value`
- Imprime una palabra con un espacio.

#### `print_scale_name`
- Llama a `get_scale_key` y luego a `find_value_from_key`.
- Imprime la palabra como `"thousand"`, `"million"`, etc.

### 🔍 Procesar cada tripleta (`process_triplet.c`)

Cada tripleta de 3 cifras como `"123"` se analiza así:

1. **Centenas**:
   - Si la cifra es diferente de 0: se imprime `"one hundred"`.

2. **Decenas y unidades**: `process_tens_units`
   - Si empieza por 1 y no es "10": usa `process_teens` → imprime `"eleven"`, `"fourteen"`, etc.
   - Si no:
     - `process_tens` → imprime `"twenty"`, `"thirty"`, etc.
     - `process_units` → imprime `"one"`, `"two"`, etc.

---

## 🧵 Ejemplo completo

Para este diccionario:

```
1 : one
2 : two
3 : three
10 : ten
11 : eleven
20 : twenty
100 : hundred
1000 : thousand
```

Y ejecutando:

```bash
./rush02 1234
```

El programa:

1. Divide en `"001"` y `"234"`.
2. Procesa:
   - `"1"` → `one`
   - Escala 1 → `thousand`
   - `"234"` → `two hundred thirty four`

**Resultado final:**
```bash
one thousand two hundred thirty four
```

---

## 🔧 Compilación

### Makefile

```makefile
make     # Compila el programa
make clean   # Borra los archivos .o
make fclean  # Borra ejecutable y .o
make re      # Limpia y recompila
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

---

## 💬 ¿Dudas?

Este README está pensado para que incluso tus compañeros que no sepan programar puedan leerlo y entender qué pasa paso a paso.