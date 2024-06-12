/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <username@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:59:56 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/12 17:00:00 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*rtrn;

	if (min >= max)
		return (NULL);
	size = max - min;
	rtrn = malloc(size * sizeof(int));
	if (rtrn == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		rtrn[i] = min + i;
		i++;
	}
	return (rtrn);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*d;
	int	min = 2;
	int	max = 16;
	int size = max - min;
	int	i = 1;
	
	d = ft_range(min, max);
	printf("array: { %i", d[0]);
	while (i < (size))
	{
		printf(", %i", d[i]);
		i++;
	}
	printf(" }\n");
}*/
