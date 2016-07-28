/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 14:15:11 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/27 17:01:58 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	v_open(char *file)
{
	int		fd;

	if ((fd = open(file, O_RDONLY)) < 0)
		ft_putstr("map error\n");
	close(fd);
}

int		put_map_error(void)
{
	ft_putstr("map error\n");
	return (-1);
}

int		parse(char *file)
{
	int		nb_lines;
	int		nb_cols;
	int		fd;

	if ((nb_lines = get_nb_lines(&fd, file)) == -1)
		return (-1);
	if ((nb_cols = get_nb_cols(file)) == -1)
		return (-1);
	if (nb_lines == 0 || nb_cols == 0)
		return (put_map_error());
	if ((convert(fd, nb_lines, nb_cols)) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return ((fd == -1) ? (-1) : (close(fd)));
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			v_open(argv[i]);
			if ((parse(argv[i])) == -1 && i == argc - 1)
				return (-1);
			i++;
		}
	}
	else if (ft_stdin() == 1)
	{
		if ((parse("map")) == -1)
			return (-1);
	}
	else
		return (put_map_error());
	return (0);
}
