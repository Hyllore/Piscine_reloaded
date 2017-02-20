# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: droly <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/03 17:07:51 by droly             #+#    #+#              #
#    Updated: 2017/02/17 16:45:58 by droly            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = display_file.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRC)
	@gcc $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)
	@echo "Objects cleaned."

fclean: clean
	@rm -f $(NAME)
	@echo "Target cleaned."

re: fclean all

.PHONY: all makelibft clean fclean re
