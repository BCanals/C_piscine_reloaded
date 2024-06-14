/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <username@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:55:10 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/14 12:06:16 by bcanals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	rtrn;

	if (nb < 0 || nb > 12)
		return (0);
	i = 2;
	rtrn = 1;
	while (i <= nb)
	{
		rtrn *= i;
		i++;
	}
	return (rtrn);
}
/*
#include <stdio.h>

int main ()
{
	int i = -1;

	while(i < 15)
	{
		printf("%i --> %i\n", i, ft_iterative_factorial(i));
		i++;
	}
}*/
