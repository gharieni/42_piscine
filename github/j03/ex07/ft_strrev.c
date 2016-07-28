/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 03:54:21 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/08 13:49:22 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

var	*ft_strrev(char *str)
{
	int size;
	int i;
	int x;

	i = 0;
	size = 0;
	while (str[size] != '\0')
		size++;
	size--;
	while (size > i)
	{
		x = str[i];
		str[i] = str[size];
		str[size] = x;
		i++;
		size--;
	}
	return (str);
}
