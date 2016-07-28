/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 13:39:07 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/12 15:16:08 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*ret;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (to_find[j] == str[i + j] && to_find[j] != '\0')
				j++;
			if (to_find[j] == '\0')
			{
				ret = &str[i];
				return (ret);
			}
			else
				j = 0;
		}
		i++;
	}
	return (0);
}
