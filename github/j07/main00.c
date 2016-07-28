#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	 main(int argc ,char **argv)
{
	int i;
	int **tab;

	argc = 0;;
	i = 0;
	printf("%d \n",ft_ultimate_range(tab,5,9));
	ft_ultimate_range(tab,5,9);
	while (i < 4)
	{
		printf("%d \n",tab[i][0]);
		i++;
	}
	return(0);
}
