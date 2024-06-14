/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcanals- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:06:25 by bcanals-          #+#    #+#             */
/*   Updated: 2024/06/14 16:33:19 by bcanals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/*
int ft_check(char *word)
{
	if (word[0] == 'y')
		return (1);
	return (0);
}

int main ()
{
	printf("flag 1");
	char  *tab[2];

	printf("flag 1");
	tab[0][0] = 'y';
	tab[1][0] = 'n';
	
	printf("flag 2");

	printf("%i\n", ft_countif(tab, &ft_check));
}*/
