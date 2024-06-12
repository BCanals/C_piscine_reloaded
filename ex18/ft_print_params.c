/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <username@student.your42network>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:22:24 by bizcru            #+#    #+#             */
/*   Updated: 2024/06/12 16:25:03 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar(10);
		i++;
	}
}
