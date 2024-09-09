##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oh bordel
##

SRC	=	my_put_nbr_str.c	\
		my_putchar.c		\
		my_strcpy.c		\
		my_strdup.c		\
		my_printf.c		\
		special_cases.c		\
		my_strlen.c		\
		special_x.c

TEST	=	my_put_nbr_str.c	\
		my_putchar.c		\
		my_strcpy.c		\
		my_strdup.c		\
		my_printf.c		\
		my_strlen.c		\
		special_cases.c		\
		tests/test_my_printf.c	\
		special_x.c

NAME	= libmy.a

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

tests_run:
		gcc -o unit_tests $(TEST) -lcriterion --coverage
		./unit_tests

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

