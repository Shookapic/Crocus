##
## EPITECH PROJECT, 2023
## stumper
## File description:
## Makefile
##

NAME = crocus

SRC = 	first_part_numbers.c \
	second_part_numbers.c \
	crocus.c \
	lib.c \
	my_cmps.c \
	parser.c \

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra -W

CC = gcc

all:	$(OBJ)
	$(CC) -o $(NAME) $(SRC) $(CFLAGS)

clean:
	find -type f -name "#*#" -delete -o \
	-type f -name "*~" -delete -o -type f -name "*.o" -delete -o \
	-type f -name "*.gc*" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all
