# 💡 Proyecto C04

Este repositorio contiene los ejercicios del proyecto C04, centrado en la manipulación de números y conversión de cadenas en lenguaje C. 

A lo largo de estos ejercicios, trabajarás con funciones como `ft_strlen`, `ft_putstr`, `ft_putnbr` y conversiones numéricas como `ft_atoi`, `ft_putnbr_base` y `ft_atoi_base`.

---

## 🎯 Objetivos del proyecto

- Implementar funciones de salida como `putstr` y `putnbr` usando solo `write`.
- Reproducir el comportamiento de funciones estándar como `atoi`.
- Crear funciones que conviertan números entre distintas bases.
- Respetar el estilo Norminette de 42.

---

## 📁 Tabla de ejercicios

| Ejercicio | Descripción              | Directorio | Archivo entregable     |
|----------:|--------------------------|------------|-------------------------|
| 00        | Reproduce `strlen`       | ex00/      | ft_strlen.c             |
| 01        | Muestra un string con `write` | ex01/ | ft_putstr.c             |
| 02        | Muestra un número con `write` | ex02/ | ft_putnbr.c             |
| 03        | Reproduce `atoi`         | ex03/      | ft_atoi.c               |
| 04        | Muestra un número en una base | ex04/ | ft_putnbr_base.c        |
| 05        | Reproduce `atoi` con base | ex05/     | ft_atoi_base.c          |

---

## 🔧 Instrucciones de compilación

Compila cada ejercicio individualmente con:

```bash
gcc -Wall -Wextra -Werror exXX/archivo.c -o nombre_programa
```

---

## 🧪 Consejos para testeo
    - Prueba con entradas vacías, valores negativos y combinaciones de caracteres especiales.
    
    - Compara con funciones estándar (atoi, strlen, etc.) para verificar el comportamiento.

    - Verifica el manejo de bases inválidas en los ejercicios 04 y 05.

    - Usa valgrind para comprobar que no haya fugas de memoria (si aplica).

---

## 📐 Normas de estilo
    - Indentar el código usando tabs en lugar de espacios.

    - Nombres de variables coherentes y descriptivos.

    - No se permite el uso de funciones externas, salvo write donde esté autorizado.

    - Código legible, estructurado y con claridad.

---

## 📌 Recomendaciones
     - Haz commits frecuentes con comentarios descriptivos.

     - Consulta el man de funciones estándar para entender su funcionamiento.

     - Comparte tus avances en el grupo de estudio.

     - Testea exhaustivamente antes de entregar.

---

## 📋 Estado del proyecto

| 🧩 Ejercicio | Enlace         | Completado | Entregado | Validación |
|--------------|----------------|------------|-----------|------------|
| 00           | [ex00](./ex00/) | ✅ Sí      | ✅ Sí      | 100%       |
| 01           | [ex01](./ex01/) | ✅ Sí      | ✅ Sí      | 100%       |
| 02           | [ex02](./ex02/) | ✅ Sí      | ✅ Sí      | 100%       |
| 03           | [ex03](./ex03/) | ✅ Sí      | ✅ Sí      | 100%       |
| 04           | ex04         | ⬜ No      | ⬜ No      | —          |
| 05           | ex05           | ⬜ No      | ⬜ No      | —          |


---


## 📜 Licencia
Este proyecto forma parte del reto intensivo de programación en lenguaje C durante la Piscine 42. 

Se entrega con fines educativos y puede ser reutilizado como referencia personal.

---

## 🙋 Autor
Desarrollado como parte del proceso de aprendizaje en la Piscine 42.

---

## 📧 Contacto
[rmarin-n@student.42barcelona.com](mailto:rmarin-n@student.42barcelona.com)
