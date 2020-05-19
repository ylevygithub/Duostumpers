##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## make library
##

SRC	=	main.c \
		cesar.c

OBJ	=	$(SRC:.c=.o)

NAME =	cesar

all:	$(OBJ)
	gcc -g -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ) crypt

fclean:	clean
	rm -f $(NAME)

re:	fclean all
