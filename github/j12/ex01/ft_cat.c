/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:53:18 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/21 18:58:22 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cat(char *file)
{
	char	buf[BUF_SIZE + 1];
	int		len;
	int		fl;

	if ((fl = open(file, O_RDONLY)) == -1)
		return (errno);
	while ((len = read(fl, buf, BUF_SIZE)) != 0)
	{
		buf[len] = '\0';
		ft_putstr(buf);
	}
	close(fl);
	return (0);
}
