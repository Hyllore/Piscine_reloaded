# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: droly <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/03 17:07:51 by droly             #+#    #+#              #
#    Updated: 2017/02/17 12:05:40 by droly            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_strlen.c		\
      srcs/ft_strcmp.c		\
      srcs/ft_putchar.c		\
      srcs/ft_putstr.c		\
      srcs/ft_swap.c


OBJ = ft_strlen.o		\
      ft_strcmp.o		\
      ft_putchar.o		\
      ft_putstr.o		\
      ft_swap.o


FLAGS = -Wall -Wextra -Werror

.PHONY: clean fclean re

all: $(NAME)

$(NAME) :
	@gcc $(FLAGS) -c -I ./includes/ $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "compilation..."

clean: 
	@rm -f $(OBJ)
	@echo "supression .o ..."

fclean: clean
	@rm -f $(NAME)
	@echo "supression totale..."

re: fclean all
