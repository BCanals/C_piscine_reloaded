/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <username@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:46:50 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/12 14:47:38 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int c);

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (n < 0)
	{
		ft_putchar(neg);
	}
	else
	{
		ft_putchar(pos);
	}
}
