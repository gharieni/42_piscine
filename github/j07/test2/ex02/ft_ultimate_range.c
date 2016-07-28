/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 19:47:22 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/14 20:08:03 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;

	i = 0;
	if (min >= max)
		*range = NULL;
	if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
		*range = NULL;
	while (min < max)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}
