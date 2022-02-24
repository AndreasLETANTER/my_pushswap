##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile for eval_expr
##

SRC	=	src/*.c

NEW_SRC = 	src/arg_to_array.c \
			src/display_list.c \
			src/get_nbr.c \
			src/pa_case.c \
			src/pb_case.c \
			src/pushswap.c \
			src/rotate_left.c \
			src/rotate_right.c \
			src/sort.c \
			src/swap.c \
			src/two_number_list.c \
			src/array_case.c

TESTS_SRC = tests/*.c

NAME	=	push_swap

LIB	=	-L./lib/my -lmy

CFLAGS = -Iinclude

TESTS_FLAGS = --coverage -lcriterion

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):
	make makelib
	gcc -o $(NAME) $(CFLAGS) $(SRC) $(LIB)

makelib:
	make -C ./lib/my

clean:
	rm -f *~
	rm -f *.gcno
	rm -f *.gcda
	rm -f unit_tests
	rm -f *.o

fclean: clean
	rm -f $(NAME)
	make fclean -C ./lib/my

re:	fclean all

unit_tests: fclean makelib
	make clean
	gcc -o unit_tests $(TESTS_SRC) $(NEW_SRC) $(CFLAGS) $(LIB) $(TESTS_FLAGS)
	./unit_tests
	make coverage
	make branch_coverage

coverage:
	gcovr --exclude tests

branch_coverage:
	gcovr -b --exclude tests

push:
	make fclean
	git add .
	@read -p "Give a commit message " TAG \
    && git commit -m "$${TAG}"
	git push

.PHONY: all makelib clean fclean re
