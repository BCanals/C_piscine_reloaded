/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <username@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:43:48 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/12 14:44:01 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(inc c);

void	ft_print_alphabet(void)
{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		i ++;
	}
}
