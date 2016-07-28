/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 20:41:55 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/07 23:43:08 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != 55)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;

	a = 48;
	b = 49;
	c = 50;
	while (a <= 57)
	{
		if ((a < b) && (b < c))
			ft_print(a, b, c);
		if (c++ >= 57)
		{
			c = 48;
			b++;
		}
		if (b > 57)
		{
			b = 48;
			a++;
		}
	}
}
