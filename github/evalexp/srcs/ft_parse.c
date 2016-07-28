/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 17:54:43 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/24 18:09:20 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_h.h>

l_list	*ft_parse(int j, char *str)
{
	int k;
	l_list l;
	l_list t;
	
	l = NULL;
	t = NULL;
	k = 0;
	j = 1;
	while (str[j])
	{
		if ((str[i] >= '0' && str[i] <= '9') || stri[i] == '+' ||
		stri[i] == '-' || stri[i] == '/' || stri[i] == '*' || 
		stri[i] == '%' || stri[i] == '(' || stri[i] == ')')
			k++;
		else
		{
			j = 0;
			return;
		}
	}
	
	l =(l_list*)malloc(sizeof(l_list)*k);
	
	k = 0;
	t = l;
	while (str[j])
	{
		if(str[i] >= '0' && str[i] <= '9')
			t->val = ('str[i]' - '0');
		else
			t->val = str[i];
		t = t->next;
	}
	return (l);
}
