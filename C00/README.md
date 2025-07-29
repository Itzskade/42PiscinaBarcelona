# 💻 Proyecto C00 

Este repositorio contiene los ejercicios del proyecto **C00**, uno de los primeros bloques del aprendizaje en lenguaje C durante la Piscina 42. El objetivo principal es dominar la sintaxis básica, la lógica de programación secuencial, y el uso correcto de funciones, bucles, condiciones y manejo de caracteres.

---

## 🎯 Objetivos del proyecto

- Familiarizarse con la escritura de funciones en C  
- Aplicar condiciones, bucles y estructuras simples  
- Aprender a imprimir en terminal utilizando `write`  
- Comprender la ejecución secuencial y el flujo lógico  
- Seguir los estándares de estilo Norminette

---

## 📁 Tabla de ejercicios

| Ejercicio | Descripción                                                   | Directorio | Archivo entregable         |
|-----------|---------------------------------------------------------------|------------|-----------------------------|
| 00        | Mostrar un carácter con `write`                               | ex00/      | `ft_putchar.c`              |
| 01        | Mostrar el alfabeto en minúsculas en orden creciente          | ex01/      | `ft_print_alphabet.c`       |
| 02        | Mostrar el alfabeto en minúsculas en orden decreciente        | ex02/      | `ft_print_reverse_alphabet.c` |
| 03        | Mostrar todos los dígitos del 0 al 9                          | ex03/      | `ft_print_numbers.c`        |
| 04        | Mostrar “P” o “N” según el signo de un número entero          | ex04/      | `ft_is_negative.c`          |
| 05        | Mostrar todas las combinaciones de tres dígitos distintos     | ex05/      | `ft_print_comb.c`           |
| 06        | Mostrar combinaciones de dos números del 00 al 99             | ex06/      | `ft_print_comb2.c`          |
| 07        | Mostrar cualquier número entero con `write`                   | ex07/      | `ft_putnbr.c`               |
| 08        | Mostrar combinaciones de `n` dígitos en orden creciente       | ex08/      | `ft_print_combn.c`          |

---

## 🔧 Instrucciones de compilación

Compila cada ejercicio individualmente con:

```bash
gcc -Wall -Wextra -Werror exXX/archivo.c -o nombre_programa
```

---


## 🔧 Requisitos técnicos

- Solo se permite usar la función `write()`  
- No se permiten funciones estándar como `printf`, `puts`, etc.  
- Código norminette-friendly: sangrado por tabs, nombres coherentes, claridad sintáctica  
- Cada función debe seguir el prototipo indicado en el ejercicio  
- Todos los ejercicios deben compilarse con `gcc -Wall -Wextra -Werror`

---

## 📋 Estado del proyecto

| 🧩 Ejercicio | Enlace                                                                                       | Completado | Entregado | Validación |
|--------------|----------------------------------------------------------------------------------------------|------------|-----------|------------|
| 00           | [ex00](https://github.com/Itzskade/Piscina42/tree/main/C00/ex00)                             | ✅ Sí      | ✅ Sí     | 100%       |
| 01           | [ex01](https://github.com/Itzskade/Piscina42/tree/main/C00/ex01)                             | ✅ Sí      | ✅ Sí     | 100%       |
| 02           | [ex02](https://github.com/Itzskade/Piscina42/tree/main/C00/ex02)                             | ✅ Sí      | ✅ Sí     | 100%       |
| 03           | [ex03](https://github.com/Itzskade/Piscina42/tree/main/C00/ex03)                             | ✅ Sí      | ✅ Sí     | 100%       |
| 04           | [ex04](https://github.com/Itzskade/Piscina42/tree/main/C00/ex04)                             | ✅ Sí      | ✅ Sí     | 100%       |
| 05           | [ex05](https://github.com/Itzskade/Piscina42/tree/main/C00/ex05)                             | ✅ Sí      | ✅ Sí     | 100%       |
| 06           | [ex06](https://github.com/Itzskade/Piscina42/tree/main/C00/ex06)                             | ✅ Sí      | ✅ Sí     | 100%       |
| 07           | [ex07](https://github.com/Itzskade/Piscina42/tree/main/C00/ex07)                             | ✅ Sí      | ✅ Sí     | 100%       |
| 08           | [ex08](https://github.com/Itzskade/Piscina42/tree/main/C00/ex08)                             | ✅ Sí      | ✅ Sí     | 100%       |

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

    -  Haz commits frecuentes y descriptivos  

    -  Utiliza `man write` para entender bien la función autorizada  

    -  Cumple con las normas de Norminette desde el principio  

    -  Testea tus funciones con distintos valores, incluidos extremos  

    -  Si te bloqueas, colabora y pregunta — el entorno peer-to-peer es clave

---

## 📜 Licencia

Este proyecto es parte del proceso de aprendizaje en la Piscine 42 y se entrega con fines educativos. 

Puedes reutilizar el código con fines personales o como referencia.

---

## 🙋 Autor

Desarrollado como parte del reto intensivo de programación en lenguaje C durante la Piscine 42.

📧 Contacto: [rmarin-n@student.42barcelona.com](mailto:rmarin-n@student.42barcelona.com)
