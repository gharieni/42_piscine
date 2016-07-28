# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmerigau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 10:23:23 by dmerigau          #+#    #+#              #
#    Updated: 2016/07/24 18:55:50 by fmaury           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC2_C = main.c

SRC2_O = main.o

SRC0_C = colle00_noout.c\
		 colle01_noout.c\
		 colle02_noout.c\
		 colle03_noout.c\
		 colle04_noout.c\

SRC0_O = colle00_noout.o\
		 colle01_noout.o\
		 colle02_noout.o\
		 colle03_noout.o\
		 colle04_noout.o\

SRCCHAR_C = ft_putchar.c

SRCCHAR_O = ft_putchar.o

SRCSTR_C = ft_putstr.c

SRCSTR_O = ft_putstr.o

SRCSTRCMP_C = ft_strcmp.c

SRCSTRCMP_O = ft_strcmp.o

SRCPUTNBR_C = ft_putnbr.c

SRCPUTNBR_O = ft_putnbr.o

SRCREALOC_C = ft_realloc.c

SRCREALOC_O = ft_realloc.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC2_C) $(SRC0_C) $(SRCSTR_C) $(SRCCHAR_C) $(SRCSTRCMP_C) $(SRCPUTNBR_C) $(SRCREALOC_C)
	gcc -Wall -Wextra -Werror $(SRC2_O) $(SRC0_O) $(SRCCHAR_O) $(SRCSTR_O) $(SRCSTRCMP_O) $(SRCPUTNBR_O) $(SRCREALOC_O) -o $(NAME)

clean:
	/bin/rm -rf $(SRC2_O) $(SRCSTR_O) $(SRCCHAR_O) $(SRC0_O) $(SRCSTRCMP_O) $(SRCPUTNBR_O) $(SRCREALOC_O)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
