# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: averheij <averheij@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/28 12:19:16 by averheij       #+#    #+#                 #
#    Updated: 2019/10/28 12:50:50 by averheij      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

_SRC = 
SRCPATH = ./srcs/
SRC = $(patsubst %, $(SRCPATH)%, $(_SRC))

_INCLUDE = 
INCLUDEPATH = ./includes/
INCLUDE = $(patsubst %, $(INCLUDEPATH)%, $(_INCLUDE))

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc  $(NAME) $(SRC)
	ranlib $(NAME)

clean:

fclean: clean

re: clean $(NAME)

