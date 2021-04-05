/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:23:07 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/10 16:35:37 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_nbr(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb(void)
{
	char	u;
	char	d;
	char	c;

	u = '2';
	d = '1';
	c = '0';
	while (c <= '7')
	{
		while (d <= '8')
		{
			while (u <= '9')
			{
				ft_put_nbr(c, d, u);
				if (!(u == '9' && d == '8' && c == '7'))
					write(1, ", ", 2);
				u++;
			}
			u = d + 1;
			d++;
		}
		d = c + 2;
		u = d + 1;
		c++;
	}
}
