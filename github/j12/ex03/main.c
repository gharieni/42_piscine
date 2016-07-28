/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 20:59:06 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/21 20:59:31 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	g_add;
int	g_option;
int	g_end;

int	main(int argc, char **argv)
{
	g_add = 0;
	if (!(ft_strcmp(argv[1], "-C")))
		g_option = 1;
	else
		g_option = 0;
	g_end = argc - 1 - g_option;
	hexdump(argv);
	return (0);
}
