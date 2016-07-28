/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 15:09:43 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/19 15:36:45 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int f(int a, int b)
{
	return(a-b);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int tab[3] = {9,9,7};

	printf("%d \n", tab[2]);
	printf("%d \n", ft_is_sort(tab,3,f));
	return (0);
}
