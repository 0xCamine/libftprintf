SRC = ft_printf.c src/*.c
OBJ = $(SRC:.c=.o)
LIB = libftprintf.a
FLAGS = -Wall -Wextra -Werror
CC = cc

ALL : $(LIB)

$(LIB) : $(OBJ)
	ar r $(LIB) $(OBJ)

%.o : %.c
	CC 