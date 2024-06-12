/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <username@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:36:23 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/12 14:43:34 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(inc c);

void	ft_print_numbers(void)
{
	char	i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i ++;
	}
}
/*
 int main ()
{
	ft_print_numbers();

}*/
