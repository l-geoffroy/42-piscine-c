/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:33:32 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/18 12:44:28 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	l;

	l = nb;
	if (l < 0)
	{
		ft_putchar('-');
		l = l * -1;
	}
	if (l >= 10)
	{
		ft_putnbr(l / 10);
		ft_putchar((l % 10) + '0');
	}
	else
		ft_putchar(l + '0');
}
