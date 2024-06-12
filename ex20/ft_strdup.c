/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <username@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:01:04 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/12 18:08:14 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;

	size = ft_strlen(src);
	dest = (char *)malloc(size * sizeof(char));
	if (dest == NULL)
		return (NULL);
	return (ft_strcpy(dest, src));
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	//char c[] = "Hello World";
	char *d;

	argc++;
	d = ft_strdup(argv[1]);
	printf("new string: %s\n", d);
}*/
