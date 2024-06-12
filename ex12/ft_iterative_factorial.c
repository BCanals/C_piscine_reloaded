/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <username@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:55:10 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/12 14:55:25 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	rtrn;

	if (nb < 0)
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
