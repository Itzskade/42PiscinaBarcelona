# 📐 Proyecto RUSH00

Este repositorio incluye las soluciones a los proyectos **Rush00** hasta **Rush04**, desarrollados como parte del programa intensivo de la Piscina C.

Cada Rush consiste en implementar una función `rush(x, y)` que imprime en pantalla una figura rectangular de tamaño `x` por `y` usando un patrón de caracteres distinto según el número del Rush.

---

## 🎯 Objetivos del proyecto

- Diseñar estructuras geométricas mediante código  
- Aplicar lógica condicional precisa para manejar esquinas, bordes e interiores  
- Trabajar con funciones personalizadas y estructura modular (`main.c`, `ft_putchar.c`, `rush0X.c`)  
- Usar bucles anidados con control de coordenadas  
- Garantizar resultados correctos con distintos valores de entrada  

---

## 📁 Estructura del ejercicio

| Rush   | Descripción                                 | Directorio | Archivos entregables                      |
|--------|---------------------------------------------|------------|-------------------------------------------|
| Rush00 | Dibujar un rectángulo con `o`, `-`, `\|`    | ex00/      | `main.c`, `ft_putchar.c`, `rush00.c`      |
| Rush01 | Rectángulo con `/`, `\`, `*`                | ex00/      | `main.c`, `ft_putchar.c`, `rush01.c`      |
| Rush02 | Rectángulo con `A`, `B`, `C`                | ex00/      | `main.c`, `ft_putchar.c`, `rush02.c`      |
| Rush03 | Rectángulo con `A`, `B`, `C`                | ex00/      | `main.c`, `ft_putchar.c`, `rush03.c`      |
| Rush04 | Rectángulo con `A`, `B`, `C`                | ex00/      | `main.c`, `ft_putchar.c`, `rush04.c`      |

---

## 🔧 Condiciones técnicas

    - Todos los archivos se compilan juntos mediante:  
        `gcc -Wall -Wextra -Werror main.c rush0X.c ft_putchar.c`  
    - Solo se permite la función `write()`  
    - El código debe cumplir con las normas de Norminette  
    - La función principal debe tener esta estructura:  
    
  ```c
  int main(void)
  {
      rush(5, 5);
      return (0);
  }

 ```
Durante la evaluación, main.c será modificado para verificar diferentes combinaciones como rush(1, 1), rush(5, 3), rush(123, 42), etc.

---

## 📌 Recomendaciones
     - Evalúa visualmente cada posición (x, y) para decidir qué carácter imprimir

     - Usa condiciones separadas para esquinas, bordes horizontales/verticales e interior

     - Testea con valores pequeños, extremos y casos asimétricos

     - Sigue las reglas de estilo desde el inicio para evitar correcciones posteriores

     - Céntrate en la lógica antes de optimizar visualmente


## 📋 Estado del proyecto

| 🧩 Rush   | Enlace                                                                                       | Completado | Entregado | Validación |
|----------|----------------------------------------------------------------------------------------------|------------|-----------|------------|
| Rush00   | [Rush00](https://github.com/Itzskade/Piscina42/tree/main/RUSH00/ex00/rush00.c)                         | ✅ Sí      | ✅ Sí     | 100%       |
| Rush01   | [Rush01](https://github.com/Itzskade/Piscina42/tree/main/RUSH00/ex00/rush01.c)                         | ✅ Sí      | ✅ Sí     | 100%       |
| Rush02   | [Rush02](https://github.com/Itzskade/Piscina42/tree/main/RUSH00/ex00/rush02.c)                         | ✅ Sí      | ✅ Sí     | 100%       |
| Rush03   | [Rush03](https://github.com/Itzskade/Piscina42/tree/main/RUSH00/ex00/rush03.c)                         | ✅ Sí      | ✅ Sí     | 100%       |
| Rush04   | [Rush04](https://github.com/Itzskade/Piscina42/tree/main/RUSH00/ex00/rush04.c)                         | ✅ Sí      | ✅ Sí     | 100%       |

---

## 📜 Licencia

Este proyecto es parte del proceso de aprendizaje en la Piscine 42 y se entrega con fines educativos. 

Puedes reutilizar el código con fines personales o como referencia.

---

## 🙋 Autor

Desarrollado como parte del reto intensivo de programación en lenguaje C durante la Piscine 42.

📧 Contacto: [rmarin-n@student.42barcelona.com](mailto:rmarin-n@student.42barcelona.com)
