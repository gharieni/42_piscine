/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 16:39:13 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/15 16:41:58 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (1);
	if ((base % 2) == 0)
		return (ft_collatz_conjecture(base / 2));
	else
		return (ft_collatz_conjecture(base * 3 + 1));
}
