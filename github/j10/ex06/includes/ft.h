/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 19:07:00 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/19 22:56:00 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <unistd.h>

int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			add(int i, int j);
void			sous(int i, int j);
void			modu(int i, int j);
void			div(int i, int j);
void			mul(int i, int j);

typedef struct	s_op
{
	int			i;
	int			j;
}				t_op;

#endif
