/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 17:32:28 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/27 23:23:00 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	pos_x(int **tab, int i, int j, int max)
{
	int k;
	int k2;

	k = 0;
	k2 = 0;
	while (k < max)
	{
		k2 = 0;
		while (k2 < max)
		{
			tab[i + k][j + k2] = -1;
			k2++;
		}
		k++;
	}
}

void	change_x(int **tab, int max, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < x - 1)
	{
		j = 0;
		while (j < y - 1)
		{
			if (tab[i][j] == max)
			{
				pos_x(tab, i, j, max);
				max = 0;
			}
			j++;
		}
		i++;
	}
}

/*int    test(int **tab ,int i,int j)
  {
  if ((tab[i][j] == tab[i + 1][j + 1]) && tab[i][j] &&
  (tab[i + 1][j] == tab[i][j + 1]) &&
  (tab[i][j + 1] == tab[i + 1][j + 1]))
  return (1);
  return (0);
  }
  */
void	ft_calcul(int **tab, int x, int y)
{
	int i;
	int j;
	int k;
	int max;

	i = 0;
	j = 0;
	k = 1;
	max = 0;

	while(k)
	{
		k = 0;
		while (i < x-1)
		{
			j = 0;
			while (j < y-1)
			{
				if((tab[i][j] == tab[i + 1][j+1]) && tab[i][j] &&
						(tab[i+1][j]==tab[i][j+1]) && (tab[i][j+1]==tab[i+1][j+1]) &&
						tab[i+1][j] * tab[i][j+1] * tab[i+1][j+1])
				{
					tab[i][j]++;
					if (tab[i][j] > max)
						max = tab[i][j];
					k = 1;
				}
				j++;
			}
			i++;
		}
		i = 0;
		j = 0;
	}

	change_x(tab, max, x, y);
}
