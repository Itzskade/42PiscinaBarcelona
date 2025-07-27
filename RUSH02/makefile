NAME = rush02

SRC = main.c \
	utils.c \
	utils2.c \
	read_file.c \
	parse_line.c \
	split_lines.c \
	dict.c \
	scale.c \
	process_number.c \
	process_triplet.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
