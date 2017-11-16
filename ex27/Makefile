# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apoque <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 16:35:26 by apoque            #+#    #+#              #
#    Updated: 2017/11/08 18:29:38 by apoque           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

FLAG = -Wall -Wextra -Werror

SRC = main.c

OBJ = main.o

all: $(NAME)

$(NAME):
	        gcc $(FLAG) $(SRC) -o $(NAME)

clean:
	        rm -f $(OBJ)

fclean: clean
	        rm -f $(NAME)

re: fclean all
