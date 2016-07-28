/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 20:14:42 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/14 22:19:28 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_concat_params(int argc, char **argv)
{
	int	i;
	int	j;
	int	c;
	char	*sh;

	j = 0;
	i = 1;
	c = 0
	while (i < argc)
	{
		while (argv[i][j])
		{
			j++;
			c++;
		}
		i++;
		j =	0;
	}
	c += argc - 2;
	sh=(char*)malloc(sizeof(char) * (c + 1));
	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
		sh = argv[i][j];
		j++;
		}
		if(i < argc - 1)
			sh = '\n';
		i++
	}
	sh[c] = '\0';	
}

