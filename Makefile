CC=cc
NAME=libftprintf.a
CFLAGS=-Wall -Wextra -Werror
HEADER = ft_printf.h
SRC=ft_printf.c utils.c libft/*.c
OBJ=*.o

all: $(NAME)

$(NAME): $(OBJ)
	ar -r $(NAME) $(OBJ)

$(OBJ): $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all	

.PHONY: clean  