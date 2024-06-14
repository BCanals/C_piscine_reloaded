/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcanals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:06:25 by bcanals-          #+#    #+#             */
/*   Updated: 2024/06/14 15:18:13 by bcanals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>

void ft_print(int c)
{
	printf("%i\n", c);
}

int main ()
{
	int tab[2];
	int lenght = 2;

	tab[0] = 4;
	tab[1] = 2;
	
	ft_foreach(tab, lenght, &ft_print);
}*/
