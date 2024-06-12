/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <username@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:55:54 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/12 14:57:46 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
