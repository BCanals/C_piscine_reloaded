/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <username@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:25:49 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/12 16:54:12 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int c);

int	ft_strcmp(char *s1, char *s2)
{
	int	retr;
	int	i;

	i = 0;
	retr = 0;
	while (s1[i] != 0 && s1[i] != 0)
	{
		retr = s1[i] - s2[i];
		if (retr != 0)
			return (retr);
		i++;
	}
	retr = s1[i] - s2[i];
	return (retr);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	c;

	i = 1;
	while (i < argc)
	{
		c = 1;
		j = 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[c], argv[j]) > 0)
				c = j;
			j++;
		}
		ft_putstr(&argv[c][0]);
		argv[c][0] = 127;
		ft_putchar(10);
		i++;
	}
}
