## 💡 Proyecto C07
Este repositorio contiene los ejercicios del proyecto C07, enfocados en la manipulación dinámica de memoria con `malloc`, `arrays`, `cadenas` y `conversiones numéricas` en lenguaje C.

A través de estos ejercicios, aprenderás a trabajar con punteros, gestionar memoria, transformar cadenas y dividir textos según separadores personalizados.

---

## 🎯 Objetivos del proyecto
- Utilizar `malloc` para reservar memoria dinámica.
- Crear y manipular arrays dinámicos de enteros y cadenas.
- Reproducir el comportamiento de funciones estándar como `strdup`.
- Transformar bases numéricas mediante conversiones de cadenas.
- Dividir cadenas con múltiples separadores personalizados.
- Cumplir con el estilo Norminette de 42.

---

## 📁 Tabla de ejercicios

| Ejercicio | Descripción                                        | Directorio | Archivo entregable            |
|----------:|----------------------------------------------------|------------|-------------------------------|
| 00        | Reproduce el comportamiento de `strdup`            | ex00/      | ft_strdup.c                   |
| 01        | Devuelve un array con valores entre min y max      | ex01/      | ft_range.c                    |
| 02        | Reserva y llena un array de int entre min y max    | ex02/      | ft_ultimate_range.c           | 
| 03        | Une cadenas separadas por un separador personalizado| ex03/      | ft_strjoin.c                 |  
| 04        | Convierte una cadena entre bases numéricas         | ex04/      | ft_convert_base.c             | 
| 05        | Divide una cadena en función de múltiples separadores | ex05/   | ft_split.c                    | 

--- 

## 🔧 Instrucciones de compilación

Compila cada ejercicio individualmente con:

```bash
gcc -Wall -Wextra -Werror exXX/archivo.c -o nombre_programa
```

---

## 🧪 Consejos para testeo

    - Verifica si la memoria fue correctamente reservada.

    - Usa valgrind para asegurar que no hay fugas de memoria.

    - Prueba con distintos rangos, cadenas vacías y separadores complejos.

    - Compara los resultados con los ejemplos del enunciado.

---

## 📐 Normas de estilo

    - Indentar el código usando tabs en lugar de espacios.

    - Nombres coherentes y descriptivos para funciones y variables.

    - Código estructurado, legible y bien documentado.

    Cumple con la Norminette sin excepciones.

---

## 📋 Estado del proyecto

| 🧩 Ejercicio | Enlace         | Completado | Entregado | Validación |
|--------------|----------------|------------|-----------|------------|
| 00           | [ex00](./ex00/) | ✅ Sí      | ✅ Sí      | 100%       |
| 01           | [ex01](./ex01/) | ✅ Sí      | ✅ Sí      | 100%       |
| 02           | [ex02](./ex02/) | ✅ Sí      | ✅ Sí      | 100%       |
| 03           | [ex03](./ex03/) | ✅ Sí      | ✅ Sí      | 100%       |
| 04           | [ex04](./ex04/) | ❌ No      | ❌ No      | -          |
| 05           | [ex05](./ex05/) | ❌ No      | ❌ No      | -          |


---

## 📌 Recomendaciones

     - Haz commits frecuentes para documentar tu progreso.

     - Comenta especialmente el manejo de memoria.

     - Revisa documentación sobre bases numéricas y funciones de cadenas.

     - Usa funciones auxiliares para dividir responsabilidades.

---

## 📜 Licencia 

Este proyecto forma parte del proceso de aprendizaje en la Piscine 42 y se entrega con fines educativos.

El código puede reutilizarse como referencia personal.

---

## 🙋 Autor 

Desarrollado como parte del reto intensivo de programación en lenguaje C durante la Piscine 42.

---

## 📧 Contacto: 

rmarin-n@student.42barcelona.com
