# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmelek <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/21 19:19:56 by gmelek            #+#    #+#              #
#    Updated: 2016/07/21 19:20:26 by gmelek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = ft_tail.c main.c ft_putchar.c ft_putstr.c ft_atoi.c size_files.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror $(SRC)
			gcc -o $(NAME) ft_tail.o main.o ft_putchar.o ft_putstr.o ft_atoi.o size_files.o

clean:
		/bin/rm -f ft_tail.o main.o ft_putchar.o ft_putstr.o ft_atoi.o size_files.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
