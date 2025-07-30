# Directorios usados
SRC_DIR := src          # Carpeta donde están los archivos fuente (.c)
OBJ_DIR := obj          # Carpeta donde se guardarán los archivos objeto (.o)

# Listado de archivos fuente y objetos
SRCS := $(wildcard $(SRC_DIR)/*.c)                   # Lista todos los .c en SRC_DIR
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)        # Cambia extensión y carpeta para los .o

TARGET := rush-02      # Nombre del ejecutable final

# Compilador y flags
CC := gcc
CFLAGS := -Wall -Werror -Wextra   # Flags para mostrar warnings, tratarlos como errores y warnings extra

# Target por defecto: compilar todo
all: $(TARGET)

# Cómo generar el ejecutable a partir de los objetos
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

# Cómo compilar cada archivo objeto
# Crea la carpeta OBJ_DIR si no existe
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Limpia archivos objeto y ejecutable
clean:
	rm -rf $(OBJ_DIR) $(TARGET)

# Limpieza completa (igual que clean aquí)
fclean: clean

# Recompila todo desde cero
re: fclean all

# Indica que estos no son archivos
.PHONY: all clean fclean re