/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 18:52:11 by gmelek            #+#    #+#             */
/*   Updated: 2016/07/15 01:18:33 by gmelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour >= 1 && hour < 11)
		printf("%d.00 A.M AND %d.00 A.M", hour, (hour + 1));
	else if (hour == 0 || hour == 24)
		printf("12.00 A.M AND 01.00 A.M");
	else if (hour == 11)
		printf("%d.00 A.M AND %d.00 P.M", hour, (hour + 1));
	else if (hour == 23)
		printf("11.00 P.M AND 12.00 A.M");
	else if (hour == 12)
		printf("12.00 P.M AND 01.00 P.M");
	else
	{
		hour -= 12;
		printf("%d.00 P.M AND %d.00 P.M", hour, (hour + 1));
	}
	printf("\n");
}
