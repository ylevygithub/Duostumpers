##
## EPITECH PROJECT, 2019
## make
## File description:
## make
##

SRC	=	main.c \
		lib.c

OBJ	=	$(SRC:.c=.o)

NAME	=	crocus

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
