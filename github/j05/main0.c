#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	dest[10];

		ft_putstr(argv[1]);
		return (0);
	}
}
