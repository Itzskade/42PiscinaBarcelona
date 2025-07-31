TARGET = libft.a

SRC_DIR = srcs
INC_DIR = includes

SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS = $(SRCS:%.c=srcs/%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

AR = ar
FLAGS = rcs 

all: $(TARGET)

$(TARGET): $(OBJS)
	$(AR) $(FLAGS) $@ $(OBJS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
