# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmelek <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/21 12:27:33 by gmelek            #+#    #+#              #
#    Updated: 2016/07/21 18:20:43 by gmelek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c ft_putstr.c ft_putchar.c ft_display_file.c

FLAG = -Wall -Wextra -Werror

all: $(NAME)
$(NAME):
		gcc -c $(FLAG) $(SRC)
		gcc -o $(NAME) main.o ft_putstr.o ft_putchar.o ft_display_file.o


clean:
	/bin/rm -f main.o ft_putstr.o ft_putchar.o ft_display_file.o
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
