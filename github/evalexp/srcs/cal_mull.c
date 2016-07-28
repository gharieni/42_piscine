/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_mull.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 12:04:15 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/24 12:11:31 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	liber(l_list l)
{
	tmp->back->next = tmp->next->next;
	free(tmp->next);
	free(tmp);
	tmp = tmp->next->next;
}

void	cal_mul(l_list *list)
{
	int		i;
	l_list	*tmp;

	tmp = list;
	while (tmp && tmp != ")")
	{
		if (tmp->opp == '*')
		{
			tmp->back->val = mul(tmp->back->val, tmp->next->val);
			liber(tmp);
		}
		else if (tmp->opp == '/')
		{
			tmp->back->val = div(tmp->back->val, tmp->next->val);
			liber(tmp);
		}
		else if (tmp->opp == '%')
		{
			tmp->back->val = mod(tmp->back->val, tmp->next->val);
			liber(tmp);
		}
		else
			tmp = tmp->next;
	}
}
