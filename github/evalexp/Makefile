# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmelek <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/21 18:52:00 by gmelek            #+#    #+#              #
#    Updated: 2016/07/21 18:52:52 by gmelek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = main.c ft_cat.c ft_putchar.c ft_putstr.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror $(SRC)
			gcc -o $(NAME) main.o ft_cat.o ft_putchar.o ft_putstr.o

clean:
		/bin/rm -f main.o ft_cat.o ft_putchar.o ft_putstr.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
