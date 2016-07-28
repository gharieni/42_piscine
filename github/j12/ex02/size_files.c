/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 19:28:19 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/21 19:30:09 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		size_files(char *file)
{
	int		fl;
	char	buf[2];
	int		size;

	size = 0;
	fl = open(file, O_RDONLY);
	while (read(fl, buf, 1))
		size++;
	close(fl);
	return (size);
}
