/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmerigau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 13:14:43 by dmerigau          #+#    #+#             */
/*   Updated: 2016/07/24 18:56:19 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>

void				ft_putchar(char c);
void				ft_putstr(char *str);
char				*colle00(int x, int y);
char				*colle01(int x, int y);
char				*colle02(int x, int y);
char				*colle03(int x, int y);
char				*colle04(int x, int y);
int					ft_strcmp(char *s1, char *s2);
void				ft_putnbr(int nb);
char				*ft_realloc(char *str, char *buf);

#endif
