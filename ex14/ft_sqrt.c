/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <username@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:59:08 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/12 15:00:03 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	rtrn;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	rtrn = nb / 2;
	while ((rtrn * rtrn) != nb)
	{
		rtrn--;
		if (rtrn == 0)
			break ;
	}
	return (rtrn);
}
