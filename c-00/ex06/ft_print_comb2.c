/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:41:12 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/11 10:26:48 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		i_1;
	int		i_2;

	i_1 = 0;
	while (i_1 <= 99)
	{
		i_2 = i_1 + 1;
		while (i_2 <= 99)
		{
			ft_putchar(i_1 / 10 + '0');
			ft_putchar(i_1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(i_2 / 10 + '0');
			ft_putchar(i_2 % 10 + '0');
			if (!(i_1 == 98 && i_2 == 99))
				write(1, ", ", 2);
			i_2++;
		}
		i_1++;
		i_2 = i_1 + 1;
	}
}
