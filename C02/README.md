# 💡 Proyecto C02
Este repositorio contiene los ejercicios del proyecto C02, centrado en la manipulación de cadenas de texto en lenguaje C. A través de funciones personalizadas, aprenderás a trabajar con caracteres, validar contenido, transformar strings y visualizar memoria.

---

## 🎯 Objetivos del proyecto
Reproducir el comportamiento de funciones estándar como strncpy, strlcpy, etc.

Validar contenido de strings (alfabético, numérico, imprimible…)

Transformar cadenas a mayúsculas, minúsculas y capitalizar palabras

Mostrar contenido de memoria en formato hexadecimal

Respetar el estilo Norminette de 42

---

## 📁 Tabla de ejercicios

| Ejercicio | Descripción                                                                 | Directorio | Archivo entregable             |
|----------:|------------------------------------------------------------------------------|------------|--------------------------------|
| 01        | Reproduce `strncpy`                                                         | ex01/      | ft_strncpy.c                   |
| 02        | Verifica si un string contiene solo caracteres alfabéticos                  | ex02/      | ft_str_is_alpha.c              |
| 03        | Verifica si un string contiene solo dígitos                                 | ex03/      | ft_str_is_numeric.c            |
| 04        | Verifica si un string contiene solo letras minúsculas                       | ex04/      | ft_str_is_lowercase.c          |
| 05        | Verifica si un string contiene solo letras mayúsculas                       | ex05/      | ft_str_is_uppercase.c          |
| 06        | Verifica si un string contiene solo caracteres imprimibles                  | ex06/      | ft_str_is_printable.c          |
| 07        | Convierte todas las letras de un string a mayúsculas                        | ex07/      | ft_strupcase.c                 |
| 08        | Convierte todas las letras de un string a minúsculas                        | ex08/      | ft_strlowcase.c                |
| 09        | Capitaliza cada palabra de un string                                        | ex09/      | ft_strcapitalize.c             |
| 10        | Reproduce `strlcpy`                                                         | ex10/      | ft_strlcpy.c                   |
| 11        | Muestra un string, reemplazando caracteres no imprimibles por hexadecimales | ex11/      | ft_putstr_non_printable.c      |
| 12        | Muestra una región de memoria en formato hexadecimal                        | ex12/      | ft_print_memory.c              |


---

## 🔧 Instrucciones de compilación
Compila cada ejercicio individualmente con:

``` bash
gcc -Wall -Wextra -Werror exXX/archivo.c -o nombre_programa
```

---

## 🧪 Consejos para testeo
Prueba con strings vacíos, largos y con caracteres especiales.

Usa valgrind para verificar fugas de memoria si aplicara.

Verifica la salida esperada con echo $? o comparando con funciones estándar.

--- 

## 📐 Normas de estilo
Usa tabs para sangrado, no espacios.

Nombres coherentes y descriptivos.

Sin funciones externas, excepto write donde esté permitido.

Estructura clara y legible en cada función.

---

## 📌 Recomendaciones
🔄 Haz commits frecuentes y bien comentados.

📖 Usa man para comprender el comportamiento de funciones C.

🧪 Testea en profundidad antes de entregar.

💬 Colabora y participa activamente en tu grupo de estudio.

---

## 📜 Licencia
Este proyecto forma parte del proceso de aprendizaje en la Piscine 42 y se entrega con fines educativos. 

Puedes reutilizar el código con fines personales o como referencia.

---

## 🙋 Autor
Desarrollado como parte del reto intensivo de programación en lenguaje C durante la Piscine 42.

📧 Contacto: rmarin-n@student.42barcelona.com

---
