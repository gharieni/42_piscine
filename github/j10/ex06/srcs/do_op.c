/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 18:04:55 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/19 23:11:38 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ft.h"

void	ft_dispatch(t_op data, char *op)
{
	void	(*tab[5])(int, int);

	tab[0] = &add;
	tab[1] = &sous;
	tab[2] = &modu;
	tab[3] = &div;
	tab[4] = &mul;
	if (*op == '+')
		tab[0](data.i, data.j);
	if (*op == '-')
		tab[1](data.i, data.j);
	if (*op == '%')
		tab[2](data.i, data.j);
	if (*op == '/')
		tab[3](data.i, data.j);
	if (*op == '*')
		tab[4](data.i, data.j);

}

void	ft_doop(char *v1, char *op, char *v2)
{
	t_op	data;

	data.i = ft_atoi(v1);
	data.j = ft_atoi(v2);
	if (op[1] != '\0' || (op[0] != '/' && op[0] != '%'
				&& op[0] != '+' && op[0] != '-' && op[0] != '*'))
		write(1, "0\n", 2);
	else if (op[0] == '/' && data.j == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (op[0] == '%' && data.j == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
		ft_dispatch(data, op);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	ft_doop(argv[1], argv[2], argv[3]);
	return (0);
}
