/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 19:31:49 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/20 21:19:19 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *new;
	t_list *begin_list;

	list = 0;
	begin_list = 0;
	if (ac > 0)
	{
		begin_list = ft_create_elem((void*)*(av + (ac - 1)));
		new = begin_list;
		ac--;
		while (ac > 0)
		{
			new->next = ft_create_elem((void*)*(av + (ac - 1)));
			new = new->next;
			ac--;
		}
	}
	return (begin_list);
}
