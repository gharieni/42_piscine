/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 12:43:00 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/21 14:07:53 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_display_file(char *file)
{
	char	buf[BUF_SIZE + 1];
	int		len;
	int		fl;

	if ((fl = open(file, O_RDONLY)) == -1)
		return (1);
	while ((len = read(fl, buf, BUF_SIZE)) != 0)
	{
		buf[len] = '\0';
		ft_putstr(buf);
	}
	close(fl);
	return (0);
}
