/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <username@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:03:41 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/12 16:20:47 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	retr;
	int	i;

	i = 0;
	retr = 0;
	while (s1[i] != 0 && s1[2] != 0)
	{
		retr = s1[i] - s2[i];
		if (retr != 0)
			return (retr);
		i++;
	}
	retr = s1[i] - s2[i];
	return (retr);
}
/*
int	main()
{
	char a[] = "1231";
	char b[] = "123";
	int r_retr;
	int m_retr;

	r_retr = strcmp(a,b);
	m_retr = ft_strcmp(a,b);
	printf("real return = %i\n", r_retr);
	printf("this return = %i\n", m_retr);
}*/
