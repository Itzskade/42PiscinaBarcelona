<p align="right">
  <a href="en.README.md">
    <img src="https://img.shields.io/badge/🌐%20English-README-blue?style=for-the-badge" alt="English README" />
  </a>
</p>

# 🐚 Proyecto Shell01

Este repositorio contiene todos los ejercicios del proyecto **Shell01**, parte del trayecto técnico de la Piscina 42. El propósito es fortalecer las habilidades en scripting de Bash, manipulación de entorno UNIX, procesamiento de texto, filtrado de archivos y lógica algorítmica con herramientas del terminal.

---

## 🎯 Objetivos del proyecto

- Automatizar procesos mediante scripts  
- Manipular entradas/salidas de archivos y comandos  
- Trabajar con estructuras condicionales y filtros en Bash  
- Aprender a depurar, documentar y entregar soluciones funcionales

---

## 📁 Estructura de ejercicios

| Ejercicio | Script                | Carpeta | Descripción                                                | Estado       |
|-----------|-----------------------|---------|------------------------------------------------------------|--------------|
| 01        | `print_groups.sh`     | `ex01/` | Muestra los grupos de `FT_USER` separados por comas        | ✅ Completado |
| 02        | `find_sh.sh`          | `ex02/` | Lista archivos `.sh` sin extensión en subdirectorios       | ✅ Completado |
| 03        | `count_files.sh`      | `ex03/` | Cuenta archivos y carpetas recursivamente                  | ✅ Completado |
| 04        | `MAC.sh`              | `ex04/` | Muestra direcciones MAC de la máquina                      | ✅ Completado |
| 05        | `\?$*'MaRViN'*$?\`    | `ex05/` | Crea archivo especial con contenido “42”                   | ✅ Completado |
| 06        | `skip.sh`             | `ex06/` | Muestra líneas alternas del `ls -l`                        | ✅ Completado |
| 07        | `r_dwssap.sh`         | `ex07/` | Procesa `/etc/passwd` con filtros múltiples y ordena       | ⬜ Pendiente  |
| 08        | `add_chelou.sh`       | `ex08/` | Suma dos números en bases personalizadas (`FT_NBR1/2`)     | ⬜ Pendiente  |

---

## 🔧 Herramientas utilizadas

Comandos: `id`, `groups`, `find`, `basename`, `wc`, `ls`, `awk`, `sed`, `cut`, `tr`, `sort`, `rev`  \
Variables de entorno: `$FT_USER`, `$FT_LINE1`, `$FT_LINE2`, `$FT_NBR1`, `$FT_NBR2`  
Estructuras: pipes (`|`), redirecciones (`>`, `>>`), control de saltos de línea

---

## 🧪 Resultados esperados

| Script            | Ejemplo de salida                            |
|-------------------|----------------------------------------------|
| `print_groups.sh` | `god,root,admin,master,nours,bocal`          |
| `find_sh.sh`      | `script1`, `tarea_final`, `launch`           |
| `count_files.sh`  | `42`                                         |
| `MAC.sh`          | `00:1a:2b:3c:4d:5e`, etc.                     |
| `skip.sh`         | Líneas alternas del resultado de `ls -l`     |
| `r_dwssap.sh`     | Usuarios invertidos y ordenados por filtros  |
| `add_chelou.sh`   | `Salut` o `Segmentation fault`               |

---

## 📋 Estado del proyecto

| 🧩 Ejercicio | Enlace                                                                                       | Completado | Entregado | Validación esperada    |
|--------------|----------------------------------------------------------------------------------------------|------------|-----------|-------------------------|
| 01           | [ex01](https://github.com/Itzskade/Piscina42/tree/main/Shell01/ex01)                         | ✅ Sí      | ✅ Sí     | 100%                    |
| 02           | [ex02](https://github.com/Itzskade/Piscina42/tree/main/Shell01/ex02)                         | ✅ Sí      | ✅ Sí     | 100%                    |
| 03           | [ex03](https://github.com/Itzskade/Piscina42/tree/main/Shell01/ex03)                         | ✅ Sí      | ✅ Sí     | 100%                    |
| 04           | [ex04](https://github.com/Itzskade/Piscina42/tree/main/Shell01/ex04)                         | ✅ Sí      | ✅ Sí     | 100%                    |
| 05           | [ex05](https://github.com/Itzskade/Piscina42/tree/main/Shell01/ex05)                         | ✅ Sí      | ✅ Sí     | 100%                    |
| 06           | [ex06](https://github.com/Itzskade/Piscina42/tree/main/Shell01/ex06)                         | ✅ Sí      | ✅ Sí     | 100%                    |
| 07           | _(sin contenido aún)_                                                                         | ⬜ No       | ⬜ No     | No desarrollado         |
| 08           | _(sin contenido aún)_                                                                         | ⬜ No       | ⬜ No     | No desarrollado         |


---
## 📜 Licencia

Este proyecto forma parte del proceso de aprendizaje en la Piscine 42 Barcelona y se entrega con fines educativos.

El código puede utilizarse como referencia personal.

---

## 🙋 Autor
Desarrollado como parte del reto intensivo de programación en C durante la Piscine 42.

---

## 📧 Contacto
[rmarin-n@student.42barcelona.com](mailto:rmarin-n@student.42barcelona.com)
