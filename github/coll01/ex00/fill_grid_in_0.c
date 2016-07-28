/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_grid_in.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaufin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 20:03:45 by jdaufin           #+#    #+#             */
/*   Updated: 2016/07/17 22:19:31 by jdaufin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_lines(char **line, int x, int y, char c);
int		check_cell(char **line, int x, int y, char c);
char	**fill_grid_in(char **line)
{
	int x;
	int y;
	char c;

	x = 0;
	y = 0;
	c = '1';
	while ((x <= 9) && (y <= 9))
	{
		while (x <= 9)
		{
		if (line[x][y] == '.')
		{
			while (((!check_lines(line, x, y, c)) || ((!check_cell(line, x, y, c)))) && (c <= '9'))
				c++;
			if (c == ':')
				fill_grid_in(line);
		/* Unuseful test
		 * if ((check_lines(line, x, y, c)) && ((check_cell(line, x, y, c))))
		 */
			else
			{
				line[x][y] = c;
				y++;
				c = '1';
			}
		}
		else
			x++;
		}
	}
	return (line);
}
