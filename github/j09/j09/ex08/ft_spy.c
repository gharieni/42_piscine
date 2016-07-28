/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 16:43:17 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/15 16:44:07 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

nclude <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if ((ft_strcmp(argv[i], "president") == 0)
					|| (ft_strcmp(argv[i], "attack") == 0)
					|| (ft_strcmp(argv[i], "Powers") == 0))
			{
				write(1, "Alert!!!\n", 9);
				return (0);
			}
			i++;
		}
	}
	return (0);
}

