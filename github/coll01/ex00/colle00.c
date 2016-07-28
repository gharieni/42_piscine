/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 22:02:59 by elpinto           #+#    #+#             */
/*   Updated: 2016/07/17 00:03:27 by elpinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void 	ft_putchar(char c);

void 	ft_putstr(char *str);

void		colle00(int argc, char **argv)
{
	int x;
	int y;
	int z;
	char **tab;

	z = 0;
	y = 0;	
	x = 1;
	while (x < argc )
	{
		while (argv[x][y])
		{	
			tab[z][y] = argv[x][y];
			ft_putchar(tab[z][y]);
			y++;
			ft_putchar(' ');
		}
		y = 0;
		ft_putchar('\n');	
		x++;
		z++;
	}	
}
