/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <username@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:59:08 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/14 15:52:16 by bcanals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	rtrn;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	rtrn = 0;
	while ((rtrn * rtrn) <= nb)
	{
		if ((rtrn * rtrn) == nb)
			return (rtrn);
		rtrn++;
	}
	return (0);
}
/*
int main ()
{
	
}*/
