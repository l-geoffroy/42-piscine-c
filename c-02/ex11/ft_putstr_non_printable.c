/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:57:02 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/16 12:21:21 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	str_to_hex(unsigned char u)
{
	if (u < 10)
		return ('0' + u);
	return ('a' + (u - 10));
}

void	print_hex(char c)
{
	unsigned char	x;

	x = (unsigned)c;
	ft_putchar('\\');
	ft_putchar(str_to_hex(x / 16));
	ft_putchar(str_to_hex(x % 16));
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			print_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
