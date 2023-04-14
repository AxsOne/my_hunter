##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

CC = gcc

SRC = 	$(shell find . -type f -name '*.c')

CFLAGS = -W -Werror -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

LFLAGS = -lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

NAME	=	my_hunter

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(SRC) -o $(NAME) $(CFLAGS) $(LFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all
