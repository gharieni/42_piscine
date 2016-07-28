/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmerigau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 09:21:30 by dmerigau          #+#    #+#             */
/*   Updated: 2016/07/23 21:53:05 by dmerigau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr(int nb)
{
	unsigned int nbun;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	nbun = nb;
	if (nbun > 9)
		ft_putnbr(nbun / 10);
	ft_putchar(nbun % 10 + '0');
}
