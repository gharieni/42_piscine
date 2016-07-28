/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 18:35:36 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/12 01:04:21 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	    write(1, &c, 1);
}

void	ft_putnbr(int nb);

int		main(int argc, char **argv)
{
	int nb;

	ft_putnbr(0);
	ft_putchar('\n');
	return (0);
}
