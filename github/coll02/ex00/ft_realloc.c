/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmaury <maury.francois06@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 11:40:14 by fmaury            #+#    #+#             */
/*   Updated: 2016/07/24 22:43:39 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_realloc(char *str, char *buf)
{
	char	*res;
	int		i;
	int		tstr;
	int		j;

	j = 0;
	i = 0;
	tstr = ft_strlen(str);
	res = (char*)malloc(sizeof(*str) * (tstr + ft_strlen(buf) + 1));
	if (!res)
		return (NULL);
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	while (buf[j])
	{
		res[i] = buf[j];
		i++;
		j++;
	}
	res[i] = '\0';
	free(str);
	return (res);
}
