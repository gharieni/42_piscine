/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmerigau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 13:44:30 by dmerigau          #+#    #+#             */
/*   Updated: 2016/07/11 14:18:00 by dmerigau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char *uc1;
	unsigned char *uc2;

	uc1 = (unsigned char *)s1;
	uc2 = (unsigned char *)s2;
	while (*uc1 == *uc2)
	{
		if (*uc1 == '\0' && *uc2 == '\0')
			return (0);
		uc1++;
		uc2++;
	}
	return (*uc1 - *uc2);
}
