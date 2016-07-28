/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaufin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 18:24:23 by jdaufin           #+#    #+#             */
/*   Updated: 2016/07/17 23:23:29 by jdaufin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_lines(char **line, int x, int y, char c);
int		check_cell(char **line, int x, int y, char c);
void	ft_putstr(char *str);
int		print_sudoku(char **line);
int		**fill_grid(char **line, int x, int y, char c);

void	colle01(int column, char **line)
{
	int x;
	int y;
	int c;

	x = 0;
	y = 0;
	c = '1';
	if (column == 10)
	{
		line = fill_grid(line, x, y, c);
		print_sudoku(line);
	}
}
