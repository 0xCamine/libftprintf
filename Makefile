CC = cc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
HEADER = ft_printf.h

SRC = ft_printf.c \
      utils.c \
      libft/ft_putchar_fd.c \
      libft/ft_putnbr_fd.c \
      libft/ft_putunbr_fd.c \
      libft/ft_putnbrbase_fd.c \
      libft/ft_putstr_fd.c \
      libft/ft_strlen.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re