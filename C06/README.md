# 💡 Proyecto C06

Este repositorio contiene los ejercicios del proyecto C06, centrado en el manejo de argumentos desde la línea de comandos. 

A través de estos programas escritos en C, aprenderás a manipular `argc`, `argv`, ordenarlos, recorrerlos, e imprimirlos siguiendo requisitos específicos.

---

## 🎯 Objetivos del proyecto

- Acceder a los argumentos del programa a través de `argc` y `argv`.
- Mostrar el nombre del programa o sus argumentos en pantalla.
- Ordenar y recorrer argumentos de distintas maneras.
- Utilizar únicamente la función `write` para imprimir los resultados.
- Cumplir con el estilo Norminette de 42.

---

## 📁 Tabla de ejercicios

| Ejercicio | Descripción                                   | Directorio | Archivo entregable           |
|----------:|-----------------------------------------------|------------|-------------------------------|
| 00        | Muestra el nombre del programa                | ex00/      | ft_print_program_name.c       |
| 01        | Muestra los argumentos (sin `argv[0]`)        | ex01/      | ft_print_params.c             |
| 02        | Muestra los argumentos en orden inverso       | ex02/      | ft_rev_params.c               |
| 03        | Muestra los argumentos ordenados (ASCII)      | ex03/      | ft_sort_params.c              |

---

## 🔧 Instrucciones de compilación

Compila cada ejercicio individualmente con:

```bash
gcc -Wall -Wextra -Werror exXX/archivo.c -o nombre_programa
```
---

## 🧪 Consejos para testeo
    - Prueba con distintos números y combinaciones de argumentos.

    - Usa cat -e para visualizar saltos de línea correctamente.

    - Verifica el orden y precisión del output comparando con los ejemplos dados.

    - Testea los ejercicios en entornos con argumentos vacíos o especiales.

---

## 📐 Normas de estilo
    - Indentar el código usando tabs en lugar de espacios.

    - Nombres coherentes y descriptivos.

    - Solo puede usarse write donde esté permitido.

    - Código estructurado, legible y bien documentado.

---

## 📌 Recomendaciones
     - Haz commits descriptivos y frecuentes.

     - Comenta el código especialmente en los bucles y condiciones de ordenamiento.

     - Revisa ejemplos con diferentes cantidades de argumentos.

     - Consulta documentación de argc, argv, y write para reforzar conceptos.

---

## 📋 Estado del proyecto

| 🧩 Ejercicio | Enlace         | Completado | Entregado | Validación |
|--------------|----------------|------------|-----------|------------|
| 00           | [ex00](./ex00/) | ✅ Sí      | ✅ Sí      | 100%       |
| 01           | [ex01](./ex01/) | ✅ Sí      | ✅ Sí      | 100%       |
| 02           | [ex02](./ex02/) | ✅ Sí      | ✅ Sí      | 100%       |
| 03           | [ex03](./ex03/) | ✅ Sí      | ✅ Sí      | 100%       |

---


## 📜 Licencia
Este proyecto forma parte del proceso de aprendizaje en la Piscine 42 y se entrega con fines educativos.

El código puede reutilizarse como referencia personal.

---

## 🙋 Autor
Desarrollado como parte del reto intensivo de programación en lenguaje C durante la Piscine 42.

---

## 📧 Contacto
[rmarin-n@student.42barcelona.com](mailto:rmarin-n@student.42barcelona.com)
