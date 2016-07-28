#ifndef FT_H_H
# define FT_H_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

//main.c
int		parse(char *file);
int		put_map_error(void);
void		v_open(char *file);

//get.c

void 	ft_calcul(int **tab, int x, int y);
int		convert(int fd, int nb_lines, int nb_cols);
int		get_nb_lines(int *fd, char *file);
int		get_nb_cols(char *file);
int		check_nb_lines(char *str);
void		tab_print(int **tab, int nb_lines, int nb_cols);

//help.c
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_stdin(void);

//ft_atoi.c
int		ft_atoi(char *str);

#endif
