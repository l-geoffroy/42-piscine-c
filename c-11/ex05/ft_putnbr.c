/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 16:00:51 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/04/01 11:28:29 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	nbr_2;

	nbr_2 = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nbr_2 = -nbr_2;
	}
	if (nbr_2 >= 10)
	{
		ft_putnbr(nbr_2 / 10);
		ft_putnbr(nbr_2 % 10);
	}
	else
		ft_putchar(nbr_2 + '0');
}
