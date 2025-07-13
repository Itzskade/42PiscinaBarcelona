# 🐚 Proyecto Shell01
Este repositorio contiene todos los ejercicios del proyecto Shell01, parte del trayecto técnico de la Piscina 42. El propósito es fortalecer las habilidades en scripting de Bash, manipulación de entorno UNIX, procesamiento de texto, filtrado de archivos y lógica algorítmica con herramientas del terminal.

## 🎯 Objetivos del proyecto
Automatizar procesos mediante scripts

Manipular entradas/salidas de archivos y comandos

Trabajar con estructuras condicionales y filtros en Bash

Aprender a depurar, documentar y entregar soluciones funcionales

## 📁 Estructura de ejercicios
Ejercicio	Script	Carpeta	Descripción	Estado
01	print_groups.sh	ex01/	Muestra los grupos de FT_USER separados por comas	✅ Completado
02	find_sh.sh	ex02/	Lista archivos .sh sin extensión en subdirectorios	✅ Completado
03	count_files.sh	ex03/	Cuenta archivos y carpetas recursivamente	✅ Completado
04	MAC.sh	ex04/	Muestra direcciones MAC de la máquina	✅ Completado
05	\?$*'MaRViN'*$?\	ex05/	Crea archivo especial con contenido “42”	✅ Completado
06	skip.sh	ex06/	Muestra líneas alternas del ls -l	✅ Completado
07	r_dwssap.sh	ex07/	Procesa /etc/passwd con múltiples filtros y ordena	⬜ Pendiente
08	add_chelou.sh	ex08/	Suma dos números con bases personalizadas	⬜ Pendiente
🔧 Herramientas utilizadas
id, groups, find, basename

wc, ls, awk, sed, cut, tr, sort, rev

Variables de entorno ($FT_USER, $FT_LINE1, $FT_LINE2, etc.)

Pipes (|), redirecciones (>, >>), y control de saltos de línea

## 🧪 Resultados esperados
Script	Ejemplo de salida
print_groups.sh	god,root,admin,master,nours,bocal
find_sh.sh	script1$, tarea_final$, launch$
count_files.sh	42$
MAC.sh	00:1a:2b:3c:4d:5e$, etc.
skip.sh	Alterna líneas del ls -l, omitiendo pares
r_dwssap.sh	rev_*, nombres invertidos y ordenados
add_chelou.sh	Salut o Segmentation fault según el input
📋 Estado del proyecto
🧩 Ejercicio	Completado	Entregado	Validación esperada
01–06	✅ Sí	✅ Sí	100%
07	⬜ No	⬜ No	En desarrollo
08	⬜ No	⬜ No	En desarrollo
📌 Notas y reflexión
Los primeros ejercicios consolidan el control de comandos básicos. Los últimos (07 y 08) introducen lógica compleja y manipulación de datos con transformaciones poco convencionales. Resolverlos requiere práctica, comprensión del flujo de datos y dominio del shell.

Este proyecto representa un hito fundamental dentro de la Piscina, reforzando la autonomía técnica y la capacidad de análisis para abordar problemas reales desde el terminal.
