/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00_noout.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmerigau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 20:37:26 by dmerigau          #+#    #+#             */
/*   Updated: 2016/07/23 23:15:21 by dmerigau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	ft_printline00(int x, int y, int xi, int yi)
{
	if ((xi == 1 || xi == x) && (yi == 1 || yi == y))
		return ('o');
	else if ((xi == 1 || xi == x) && (yi <= y && yi >= 1))
		return ('|');
	else if ((xi >= 1 && xi <= x) && (yi == 1 || yi == y))
		return ('-');
	else if (xi == x + 1)
		return ('\n');
	else
		return (' ');
}

char	*colle00(int x, int y)
{
	int		xi;
	int		yi;
	int		i;
	char	*array;

	array = malloc(((x + 1) * y + 1) * sizeof(char));
	i = 0;
	if (x > 0 && y > 0)
	{
		xi = 1;
		yi = 1;
		while (yi <= y)
		{
			while (xi <= x + 1)
			{
				array[i] = ft_printline00(x, y, xi, yi);
				i++;
				xi++;
			}
			xi = 1;
			yi++;
		}
	}
	array[i] = '\0';
	return (array);
}
