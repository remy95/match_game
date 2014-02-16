##
## Makefile for makefile in /home/macmil_r/rendu/102chiffrement
## 
## Made by a
## Login   <macmil_r@epitech.net>
## 
## Started on  Sun Dec  1 19:52:05 2013 a
## Last update Sun Feb 16 22:41:43 2014 a
##

CC	= gcc

NAME	= allum1

SRC	= aff_allum.c \
	  my_putchar.c \
	  my_putstr.c \
	  get_next_line.c \
	  my_getnbr.c \
	  ia.c \
	  my_put_nbr.c \
	  count_match.c \
	  main.c \
	  my_last_line.c

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ) *~

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
