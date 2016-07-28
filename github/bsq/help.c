/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 16:58:07 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/27 16:58:17 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_stdin(void)
{
	int		fd;
	char	*buffer;
	int		ret;

	buffer = (char*)malloc(sizeof(char) * 4096);
	if (buffer == NULL)
		return (-1);
	fd = open("map", O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0666);
	if (fd == -1)
		return (-1);
	while ((ret = read(0, buffer, sizeof(buffer) + 1)))
	{
		buffer[ret] = '\0';
		write(fd, buffer, ft_strlen(buffer));
	}
	if (close(fd) == -1)
		return (-1);
	if (buffer == NULL)
		return (-1);
	free(buffer);
	return (1);
}
