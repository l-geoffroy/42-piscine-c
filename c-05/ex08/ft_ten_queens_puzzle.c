/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:37:44 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/21 16:37:45 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_ten_queens_try(int grid[10], int x, int y)
{
	int i;

	i = -1;
	while (++i < x)
		if (i - grid[i] == x - y || y == grid[i] || i + grid[i] == x + y)
			return (0);
	return (1);
}

void	ft_ten_queens_rec(int grid[10], int *res, int pos)
{
	int i;
	int i2;

	if (pos == 10)
	{
		*res += 1;
		i2 = -1;
		while (++i2 < 10)
			ft_putchar(grid[i2] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			if (ft_ten_queens_try(grid, pos, i))
			{
				grid[pos] = i;
				ft_ten_queens_rec(grid, res, pos + 1);
			}
			i++;
		}
	}
}

int		ft_ten_queens_puzzle(void)
{
	int		grid[10];
	int		i;
	int		res;

	i = 0;
	while (i < 10)
	{
		grid[i] = -1;
		i++;
	}
	res = 0;
	ft_ten_queens_rec(grid, &res, 0);
	return (res);
}
