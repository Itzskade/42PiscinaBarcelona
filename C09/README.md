# 💡 Proyecto C Piscine C 09

Este repositorio contiene todos los ejercicios del proyecto **C Piscine C 09**, centrado en la creación de bibliotecas, automatización con Makefile y manipulación avanzada de cadenas en lenguaje C.

Todos los ejercicios han sido completados exitosamente.

---

## 🎯 Objetivos del proyecto

- Crear una biblioteca personalizada en C (`libft.a`).
- Automatizar la compilación con Makefile siguiendo buenas prácticas.
- Implementar funciones básicas sin usar funciones estándar.
- Dividir cadenas dinámicamente usando separadores personalizados.
- Cumplir con las normas de estilo de Norminette.

---

## 📁 Tabla de ejercicios

| Ejercicio | Descripción                                              | Directorio | Archivos entregables                                                                 |
|----------:|----------------------------------------------------------|------------|--------------------------------------------------------------------------------------|
| 00        | Crear biblioteca `libft.a` con funciones básicas         | `ex00/`    | `libft_creator.sh`, `ft_putchar.c`, `ft_swap.c`, `ft_putstr.c`, `ft_strlen.c`, `ft_strcmp.c` |
| 01        | Makefile para compilar `libft.a` con reglas normativas  | `ex01/`    | `Makefile`                                                                          |
| 02        | Función `ft_split` para dividir cadenas por separadores | `ex02/`    | `ft_split.c`                                                                        |

---

## 🔧 Instrucciones de compilación

### Ejercicio 00

```bash
sh libft_creator.sh
```

---

## 🧪 Consejos para testeo

    - Verifica que libft.a se cree correctamente y contenga todas las funciones.

    - Asegúrate de que el Makefile no compile archivos innecesarios.

    - Testea ft_split con cadenas variadas y múltiples separadores.

    - Usa valgrind para detectar fugas de memoria en ft_split.

    - Revisa que los archivos .o estén en el mismo directorio que sus .c.

---

## 📐 Normas de estilo

    - Indentar el código usando tabs en lugar de espacios.

    - Usa nombres descriptivos y claros para tus funciones y variables.

    - Escribe código modular, limpio y comentado.

    - Pasa la Norminette sin excepciones.

---

## 📌 Recomendaciones

    - Haz commits constantes para registrar tu progreso.

    - Añade comentarios explicando el uso de funciones y estructuras.

    - Revisa documentación sobre Makefiles y manipulación de cadenas.

    - Usa funciones auxiliares para mantener tu código organizado.

---

## 📋 Estado del proyecto

| 🧩 Ejercicio | Enlace                                      | Completado | Entregado | Validación |
|--------------|---------------------------------------------|------------|-----------|------------|
| 00           | [ex00](./ex00/)                             | ✅ Sí      | ✅ Sí     | 100%       |
| 01           | [ex01](./ex01/)                             | ✅ Sí      | ✅ Sí     | 100%       |
| 02           | [ex02](./ex02/)                             | ✅ Sí      | ✅ Sí     | 100%       |

---

## 📜 Licencia

Este proyecto forma parte del proceso de aprendizaje en la Piscine 42 Barcelona y se entrega con fines educativos.

El código puede utilizarse como referencia personal.

---

## 🙋 Autor

Desarrollado como parte del reto intensivo de programación en C durante la Piscine 42.

📧 Contacto: rmarin-n@student.42barcelona.com
