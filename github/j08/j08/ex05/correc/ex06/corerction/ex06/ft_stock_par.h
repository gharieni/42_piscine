/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 16:57:54 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/16 16:58:30 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>

typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

t_stock_par		*ft_param_to_tab(int ac, char **av);
char			**ft_split_whitespaces(char *str);
void			ft_print_words_tables(char **tab);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
void			ft_putchar(char c);
#endif
