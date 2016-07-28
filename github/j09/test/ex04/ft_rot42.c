/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 16:23:55 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/15 16:57:33 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_condition(char *str, int i, char *a, char *b)
{
	int j;
	int r;

	j = 0;
	r = 0;
	if (str[i] >= 65 && str[i] <= 90)
	{
		str[i] = str[i] + 32;
		r = 1;
	}
	while (a[j] != str[i] && j < 26)
		j++;
	if (r == 1)
	{
		str[i] = b[j] - 32;
		r = 0;
	}
	else
		str[i] = b[j];
}

char	*ft_rot42(char *str)
{
	int		i;
	char	*a;
	char	*b;

	a = "abcdefghijklmnopqrstuvwxyz";
	b = "qrstuvwxyzabcdefghijklmnop";
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] < 90) || (str[i] >= 97 && str[i] <= 122))
			ft_condition(str, i, a, b);
		i++;
	}
	return (str);
}
