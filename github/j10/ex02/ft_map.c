/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 22:58:41 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/19 01:47:13 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*t;
	int i;

	i=0;
	t = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		t[i] = f(tab[i]);
		i++;
	}
	return (t);
}
