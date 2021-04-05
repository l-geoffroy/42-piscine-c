/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 16:00:59 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/14 16:35:00 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y)
{
	int		w;
	int		h;

	w = 1;
	h = 1;
	while (h <= y)
	{
		while (w <= x)
		{
			if (h == 1 && (w == 1 || w == x))
				ft_putchar('A');
			else if (h == y && (w == 1 || w == x))
				ft_putchar('C');
			else if ((w > 1 && w < x && (h == 1 || h == y)) ||
					(h > 1 && h < y && (w == 1 || w == x)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			if (w == x)
				ft_putchar('\n');
			w++;
		}
		w = 1;
		h++;
	}
}
