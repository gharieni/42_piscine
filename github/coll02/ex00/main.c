/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmerigau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 13:19:09 by dmerigau          #+#    #+#             */
/*   Updated: 2016/07/24 22:45:30 by fmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	checkifmatch3(int *infos, char *array, char *resultfromcalls)
{
	resultfromcalls = colle04(infos[0], infos[1]);
	if (ft_strcmp(array, resultfromcalls) == 0)
	{
		if (infos[2] >= 1)
			ft_putstr(" || ");
		ft_putstr("[colle-04] [");
		ft_putnbr(infos[0]);
		ft_putstr("] [");
		ft_putnbr(infos[1]);
		ft_putstr("]");
		infos[2]++;
	}
	if (infos[2] == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}

void	checkifmatch2(int *infos, char *array, char *resultfromcalls)
{
	resultfromcalls = colle02(infos[0], infos[1]);
	if (ft_strcmp(array, resultfromcalls) == 0)
	{
		if (infos[2] >= 1)
			ft_putstr(" || ");
		ft_putstr("[colle-02] [");
		ft_putnbr(infos[0]);
		ft_putstr("] [");
		ft_putnbr(infos[1]);
		ft_putstr("]");
		infos[2]++;
	}
	resultfromcalls = colle03(infos[0], infos[1]);
	if (ft_strcmp(array, resultfromcalls) == 0)
	{
		if (infos[2] >= 1)
			ft_putstr(" || ");
		ft_putstr("[colle-03] [");
		ft_putnbr(infos[0]);
		ft_putstr("] [");
		ft_putnbr(infos[1]);
		ft_putstr("]");
		infos[2]++;
	}
	checkifmatch3(&infos[0], &array[0], &resultfromcalls[0]);
}

void	checkifmatch(int *infos, char *array, char *resultfromcalls)
{
	resultfromcalls = colle00(infos[0], infos[1]);
	if (ft_strcmp(array, resultfromcalls) == 0)
	{
		ft_putstr("[colle-00] [");
		ft_putnbr(infos[0]);
		ft_putstr("] [");
		ft_putnbr(infos[1]);
		ft_putstr("]");
		infos[2]++;
	}
	resultfromcalls = colle01(infos[0], infos[1]);
	if (ft_strcmp(array, resultfromcalls) == 0)
	{
		if (infos[2] >= 1)
			ft_putstr(" || ");
		ft_putstr("[colle-01] [");
		ft_putnbr(infos[0]);
		ft_putstr("] [");
		ft_putnbr(infos[1]);
		ft_putstr("]");
		infos[2]++;
	}
	checkifmatch2(&infos[0], &array[0], &resultfromcalls[0]);
}

void	whileread(char buff[3001], int *infos, int ret, char **array)
{
	char	*resultfromcalls;

	while (ret > 0)
	{
		infos[3] = 0;
		ret = read(0, buff, 3000);
		buff[ret] = '\0';
		(*array) = ft_realloc(array[0], &buff[0]);
		while (infos[3] < 3000 && buff[infos[3]])
		{
			if (buff[infos[3]] != '\n' && infos[1] == 0)
				(infos[0])++;
			if (buff[infos[3]] == '\n')
				infos[1]++;
			infos[3]++;
		}
	}
	if (!(resultfromcalls = malloc(sizeof(char) * (infos[0] * infos[1])
						+ 1)))
		return ;
	if (infos[0] > 0 && infos[1] > 0)
		checkifmatch(infos, array[0], &resultfromcalls[0]);
	else
		ft_putstr("aucune\n");
}

int		main(void)
{
	char	buff[3001];
	int		ret;
	char	*array;
	int		*infos;

	infos = malloc(sizeof(int) * 4);
	infos[0] = 0;
	infos[1] = 0;
	infos[3] = 0;
	if (!(array = (char*)malloc(sizeof(char))))
		return (0);
	*array = '\0';
	ret = 1;
	whileread(buff, infos, ret, &array);
	return (0);
}
