##
## Makefile for  in /home/schric_a/Projets/libArrayC
##
## Made by Adrien Schricke
## Login   <schric_a@epitech.net>
##
## Started on  Fri Jun 19 16:26:36 2015 Adrien Schricke
## Last update Tue Jul  7 16:20:24 2015 Adrien Schricke
##

NAME=		libarray.so

ifeq ($(CC),clang)
CC=			clang
else
CC=			gcc
endif

SRC=	 	src/integer/SequentialSearch.c

OBJ=		$(SRC:.c=.o)

CFLAGS=	-W \
				-Wall \
				-Wextra \
				-O3 \
				-fPIC \
				-Iincludes

RM=			rm -vf

all:		$(NAME)


$(NAME):	$(OBJ)
		$(CC) -shared -Wl,-soname,$(NAME) -o $(NAME) $(OBJ)

clean:
	 $(RM) $(OBJ)

fclean:		clean
	$(RM)	$(NAME)

re: fclean all

.PHONY:	all clean fclean re
