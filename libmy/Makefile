##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile libmy.a
##

SRC	=	my_strcapitalize.c	\
	my_str_islower.c	\
	clear_str_0.c	\
	compare_str.c	\
	my_putstr.c	\
	my_sort_int_array.c	\
	my_strcpy.c	\
	my_strlen.c	\
	my_strlowcase.c	\
	my_putchar.c	\
	my_strncpy.c	\
	my_str_isupper.c	\
	my_str_isalpha.c	\
	my_swap.c	\
	my_str_isprintable.c	\
	my_strcat.c	\
	my_strncat.c	\
	my_put_nbr.c	\
	my_str_isnum.c	\
	alphanumeric.c	\
	my_revstr.c	\
	cpy_nospace.c	\
	my_strupcase.c	\
	my_getnbr.c	\
	find_biggest_smallest_str.c	\
	it_is_smthg.c	\
	my_strdup.c	\
	decrypt_encrypt_str.c	\
	free_print_array.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:    $(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a *.o
	cp $(NAME) ../
	rm -f *.o

clean:
	rm -f *.o
	rm -f *~

fclean:	clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all
