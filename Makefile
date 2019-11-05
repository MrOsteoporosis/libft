# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: averheij <averheij@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/28 12:19:16 by averheij       #+#    #+#                 #
#    Updated: 2019/11/05 11:53:37 by averheij      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME        =   libft.a
SRCS        =   ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii\
	ft_isdigit ft_isprint ft_memccpy ft_memchr ft_memcmp ft_memcpy\
	ft_memmove ft_memset ft_strchr ft_strlcat ft_strlcpy ft_strlen\
	ft_strncmp ft_strnstr ft_strrchr ft_tolower ft_toupper ft_calloc\
	ft_strdup ft_substr ft_strjoin ft_strtrim ft_itoa ft_split\
	ft_strmapi ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd
CFILES      =   $(SRCS:%=%.c)
OFILES      =   $(CFILES:.c=.o)
BONUS_SRCS  =	ft_lstnew_bonus ft_lstadd_back_bonus ft_lstadd_front_bonus\
				ft_lstlast_bonus ft_lstsize_bonus ft_lstdelone_bonus\
				ft_lstclear_bonus ft_lstiter_bonus ft_lstmap_bonus
BONUS_CFILES=	$(BONUS_SRCS:%=%.c)
BONUS_OFILES=	$(BONUS_CFILES:.c=.o)
INCLUDES    =   
FLAGS       =   -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OFILES)
	ar rc $(NAME) $(OFILES)
	@echo "Done"

%.o: %.c
	@echo "Compiling: $<"
	@gcc -o $@ -c $< $(FLAGS) -I$(INCLUDES)

clean:
	@rm -f $(OFILES)
	@rm -f $(BONUS_OFILES)

fclean: clean
	@echo "Cleaning: "
	@rm -f $(NAME)

re: fclean all 

bonus: $(OFILES) $(BONUS_OFILES)
	ar rc $(NAME) $(OFILES) $(BONUS_OFILES)
	@echo "Done"