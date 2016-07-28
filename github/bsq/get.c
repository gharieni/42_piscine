#include "ft_h.h"

char	g_vide;
char	g_obs;
char	g_plein;

int     convert(int fd, int nb_lines, int nb_cols)
{
	int     i;
	int     k;
	int     **tab;
	char    *tmp;
	
	i = 0;
	tmp = (char*)malloc(sizeof(char) * (nb_cols + 2));
	tab = (int**)malloc(sizeof(int*) * (nb_lines + 1));
	while (i < nb_lines)
	{
		if (read(fd, &tmp[0], nb_cols + 1) != nb_cols + 1)
			return (put_map_error());
		k = 0;
		tab[i] = (int*)malloc(sizeof(int) * (nb_cols + 1));
		while (tmp[k] != '\n')
		{
			if (tmp[k] == g_vide)
				tab[i][k] = 1;
			else if (tmp[k] == g_obs)
				tab[i][k] = 0;
			else
				return (put_map_error());
			k++;
		}
		i++;
	}
	ft_calcul(tab, nb_lines, nb_cols);
	if (read(fd, &tmp[0], nb_cols + 1) > 0)
		return (put_map_error());
	tab_print(tab, nb_lines, nb_cols);
	return (0);
}

void	tab_print(int **tab, int nb_lines, int nb_cols)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < nb_lines)
	{
		j = 0;
		while (j < nb_cols)
		{	
			if (tab[i][j] == -1)
				ft_putchar(g_plein);
			else if (tab[i][j] == 0)
				ft_putchar(g_obs);
			else
				ft_putchar(g_vide);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		get_nb_lines(int *fd, char *file)
{
	int		i;
	char	nb_lines[15];

	i = 0;
	if ((*fd = open(file, O_RDONLY)) == -1)
		return (-1);
	while (read(*fd, &nb_lines[i], 1) > 0 && nb_lines[i] != '\n' && i < 15)
		i++;
	if (i >= 14)
		return (put_map_error());
	nb_lines[i] = 0;
	if (check_nb_lines(nb_lines) == -1 || i == 0)
	{
		close(*fd);
		return (-1);
	}
	return (ft_atoi(nb_lines));
}

int		get_nb_cols(char *file)
{
	int		fd;
	char	tmp;
	int		i;

	i = 0;
	if ((fd = open(file, O_RDONLY)) == -1)
		return (-1);
	while (read(fd, &tmp, 1) > 0 && tmp != '\n')
		i++;
	i = 0;
	while (read(fd, &tmp, 1) > 0 && tmp != '\n')
		i++;
	if ((close(fd)) == -1)
		return (-1);
	return (i);
}

int		check_nb_lines(char *str)
{
	int		i;

	i = 0;
	while (str[i] && str[i + 3] && str[i] >= '0' && str[i] <= '9')
		i++;
	if (!(str[i] && str[i + 1] && str[i + 2]))
		return (put_map_error());
	g_vide = str[i];
	g_obs = str[i + 1];
	g_plein = str[i + 2];
	str[i] = '\0';
	return (0);
}
