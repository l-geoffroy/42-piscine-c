/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:36:17 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/04/01 15:55:04 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char c)
{
	char	h_1;
	char	h_2;

	h_1 = c / 16;
	h_2 = c % 16;
	if (h_1 >= 10)
	{
		ft_putchar(h_1 + 87);
	}
	else
	{
		ft_putchar(h_1 + '0');
	}
	if (h_2 >= 10)
	{
		ft_putchar(h_2 + 87);
	}
	else
	{
		ft_putchar(h_2 + '0');
	}
}

void	ft_print_addr(void *addr)
{
	int		i;
	int		int_addr;
	char	line[15];

	int_addr = (int)int_addr;
	i = 0;
	while (int_addr > 0)
	{
		line[i] = int_addr % 16;
		if (line[i] < 10)
			line[i] += '0';
		else
			line[i] += 87;
		int_addr = int_addr / 16;
		i++;
	}
	while (i < 15)
	{
		line[i] = 48;
		i++;
	}
	while (--i >= 0)
	{
		ft_putchar(line[i]);
	}
}

void	ft_print_line(void *addr, int size)
{
	int		i;
	int		spaces;
	char	*addr_str;

	i = 0;
	spaces = (19 - size) + ((16 - size) * 2) / 2;
	addr_str = (char *)addr;
	while (i++ < size)
	{
		ft_print_hex(addr_str[i]);
		if (i % 2 == 0)
			ft_putchar(' ');
	}
	while (--spaces > 0)
		ft_putchar(' ');
	i = -1;
	while (++i < size)
	{
		if (addr_str[i] <= 126 && addr_str[i] >= 32)
			ft_putchar(addr_str[i]);
		else
			ft_putchar('.');
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		c;
	int		pos;

	pos = 0;
	while (size > 0)
	{
		if (size >= 16)
		{
			size -= 16;
			c = 16;
		}
		else
		{
			c = size;
			size = 0;
		}
		ft_print_addr(addr + pos);
		write(1, ": ", 2);
		ft_print_line(addr + pos, c);
		ft_putchar('\n');
		pos = pos + 16;
	}
	return (addr);
}

int		main(void)
{
	char *tab[] = {"dfslajfdsfds", "fdjskfjdsfds", "fjorfijerfer"};
	ft_print_memory(tab, 50);
	return (0);
}

