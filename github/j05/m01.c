#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *t;

	t = dest;
	while (n)
	{
		dest = src;
		if ((*t = *src))
			n--;
		t++;
	}
	return (dest);
}

int		main(int argc, char **argv)
{
	char *d;

	ft_strncpy(d, argv[1], 2);
	printf("%s",d);
	return (0);
}
