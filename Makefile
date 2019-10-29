# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: averheij <averheij@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/28 12:19:16 by averheij       #+#    #+#                 #
#    Updated: 2019/10/29 10:42:53 by averheij      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

_SRC = ft_memset.c ft_bzero.c
SRCPATH = ./srcs/
SRC = $(patsubst %, $(SRCPATH)%, $(_SRC))

INCLUDEPATH = ./includes/

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I$(INCLUDEPATH) //compile each individually
	ar rc  $(NAME) $(SRC)

clean:
	rm -f $(patsubst %.c, %.o, $(_SRC))

fclean: clean
	rm -f $(NAME)

re: clean $(NAME)

