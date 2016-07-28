# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arouatbi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/27 21:43:52 by arouatbi          #+#    #+#              #
#    Updated: 2016/07/27 23:35:29 by gmelek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = bsq

CC = gcc
FLG = -Wall -Werror -Wextra -o $(NAME)
SRC =  get.c ft_calcul.c main.c help.c ft_h.h ft_atoi.c

all : $(NAME)

$(NAME) :
	    $(CC) -c $(FLG)$(SRC)
		$(CC) -o $(NAME)$(FLG) get.o ft_calcul.o main.o help.o ft_atoi.o

clean :

fclean : clean
	    rm -f $(NAME)

re : fclean all
