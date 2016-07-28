/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 16:05:26 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/24 17:05:04 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cal_add(l_list *list)
{
	int     i;
	l_list  *tmp;

	tmp = list;
	while (tmp && tmp != ")")
	{
		if (tmp->opp == '+')
		{
			tmp->back->val = add(tmp->back->val, tmp->next->val);
			libere(tmp);
		}
		else if (tmp->opp == '-')
		{
			tmp->back->val = minus(tmp->back->val, tmp->next->val);
			libere(tmp);
		}
		tmp = tmp->next;
	}
}
