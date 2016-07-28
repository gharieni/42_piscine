# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmelek <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/19 17:23:43 by gmelek            #+#    #+#              #
#    Updated: 2016/07/19 23:06:16 by gmelek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

GCCFLAGS = -Werror -Wall -Wextra

LIB = libft.a

all :
	gcc  $(GCCFLAGS) -o $(NAME) srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_atoi.c srcs/add.c \
		srcs/modu.c srcs/div.c srcs/mul.c srcs/sous.c srcs/do_op.c

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(LIB)
