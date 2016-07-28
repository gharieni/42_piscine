/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 17:34:46 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/14 17:52:48 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min > max)
		return (NULL);
	if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
		return (Null);
	while (min < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
