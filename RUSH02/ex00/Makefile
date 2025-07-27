# 📁 Directorios
SRC_DIR := src
INC_DIR := include
DAT_DIR := data
OBJ_DIR := obj

# 📦 Archivos fuente y objeto
SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
TARGET := rush-02
DICT_FILE := $(DAT_DIR)/numbers.dict

# 🔧 Compilador y banderas
CC := gcc
CFLAGS := -Wall -I$(INC_DIR)

# 🎯 Regla principal
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

# 🛠️ Compilar objetos en obj/
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# 📂 Validar diccionario
check-dict:
	@test -f $(DICT_FILE) || \
	(echo "❌ Diccionario no encontrado en $(DICT_FILE)" && exit 1)

# 🚀 Ejecutar con diccionario
run: check-dict $(TARGET)
	./$(TARGET) $(DICT_FILE)

# 🧹 Limpieza
clean:
	rm -rf $(OBJ_DIR) $(TARGET)

fclean: clean
	@echo "🧨 Limpieza total completada"
	
re: fclean all

# 🔖 Declarar phony targets
.PHONY: all clean check-dict run
