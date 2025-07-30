# Directorios usados
SRC_DIR := src              # Archivos fuente (.c)
OBJ_DIR := obj              # Archivos objeto (.o)
INC_DIR := include          # Archivos header (.h)
DAT_DIR := data             # Datos adicionales (opcional)

# Nombre del ejecutable final
TARGET := rush-02

# Listado de archivos fuente y objetos
SRCS := $(wildcard $(SRC_DIR)/*.c)                         # Todos los .c en SRC_DIR
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)              # Convierte src/foo.c → obj/foo.o

# Compilador y flags
CC := gcc
CFLAGS := -Wall -Werror -Wextra -I$(INC_DIR)   # Warnings + incluye headers desde include/

# Target por defecto
all: $(TARGET)

# Enlaza los archivos objeto para crear el ejecutable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

# Compilación de cada .c → .o en obj/, crea obj/ si no existe
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Borra archivos objeto y el ejecutable
clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(TARGET)

# Borra todo y recompila desde cero
re: fclean all

# Declaración de targets no asociados a archivos
.PHONY: all clean fclean re