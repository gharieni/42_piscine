/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 03:51:43 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/08 03:52:15 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str = str + 1;
	}
	return (size);
}