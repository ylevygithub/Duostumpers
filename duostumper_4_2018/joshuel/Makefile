##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## make library
##

SRC	=	my_tools.c \
		my_fridge.c \
		my_loop.c \
		main.c

OBJ	=	$(SRC:.c=.o)

NAME =	fridge

all:	$(OBJ)
	gcc -o $(NAME) $(SRC) -g

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
