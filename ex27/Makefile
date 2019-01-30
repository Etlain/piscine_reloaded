# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 09:06:02 by mmouhssi          #+#    #+#              #
#*   Updated: 2016/09/23 22:46:15 by mmouhssi         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC =  srcs/main.c srcs/ft_putstr.c srcs/ft_strlen.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(SRC)

clean:
	@rm -rf $(OBJ)
	@echo "\033[36;40mMake clean $(NAME) \033[0m"

fclean:
	@rm -rf $(OBJ)
	@rm -rf $(NAME)
	@echo "\033[36;40mMake fclean $(NAME) \033[0m"

re: fclean all

.PHONY: all clean fclean re
