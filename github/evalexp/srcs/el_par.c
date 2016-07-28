/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   el_par.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 11:24:01 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/24 17:55:25 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	next_close(l_list *l)
{
	while (l)
	{
		if (l->op == ")")
			return (1);
		elseif (l->op == "(")
			return (0);
		l = l->next;
	}
	return (0);
}

void	el_par(l_list list)
{
	l_list *l;	

	l = list;
	while (l)
	{
		if (l->op == "(" && next_close(l))
		{
			cal_mul(l);
			cal_add(l);
			l = l->next;
			l->next = l->next->next;
			l = list;
		}
		else
			l = l->next;
	}
}
