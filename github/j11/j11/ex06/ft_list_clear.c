/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:20:29 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/20 21:22:47 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *new;

	if (*begin_list)
	{
		while ((*begin_list)->next)
		{
			new = *begin_list;
			*begin_list = (*begin_list)->next;
			free(new);
		}
	}
	*begin_list = NULL;
}
