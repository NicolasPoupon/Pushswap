##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile pushswap with libmy
##

SRC	=	main_pushswap.c	\
		pushswap.c	\
		error_handling_pushswap.c	\
		linked_list.c	\
		sa_sb_ra_pushswap.c	\
		pa_pb_rb_rr_pushswap.c	\
		rra_rrb_rrr_pushswap.c	\
		if_op_sab_pab.c	\
		if_op_rab_rrab.c	\
		print_list_check_sort.c	\
		if_op_rra_rrb_rrr.c	\

SRC_TESTS	=	pushswap.c   \
			error_handling_pushswap.c	\
			linked_list.c	\
			sa_sb_ra_pushswap.c	\
			pa_pb_rb_rr_pushswap.c	\
			rra_rrb_rrr_pushswap.c	\
			if_op_sab_pab.c	\
			if_op_rab_rrab.c	\
			print_list_check_sort.c	\
			if_op_rra_rrb_rrr.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

.PHONY : all clean fclean re tests_run

all:    $(NAME)

$(NAME):	$(OBJ)
	make -C libmy
	gcc $(OBJ) -L libmy/ -o $(NAME) -lmy

clean:
	rm -f *.o
	rm -f *~
	rm -f *.gcda
	rm -f *.gcno
	make clean -C libmy
	rm -f ./a.out

fclean:	clean
	rm -f $(NAME)
	make fclean -C libmy

re:	fclean all

tests_run:
	make -C libmy
	gcc $(SRC_TESTS) -L libmy -lmy ./tests/test.c --coverage -lcriterion
	./a.out
