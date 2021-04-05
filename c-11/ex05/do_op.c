/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 14:18:25 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/31 17:51:10 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int				count;
	int				negative;
	long int		number;

	count = 0;
	negative = 0;
	number = 0;
	while ((str[count] > 8 && str[count] < 14) || (str[count] == 32))
		count++;
	while ((str[count] != '\0') && (str[count] == '+' || str[count] == '-'))
	{
		if (str[count] == '-')
			negative++;
		count++;
	}
	while ((str[count] != '\0') && (str[count] >= 48 && str[count] <= 57))
	{
		number = number * 10 + str[count] - 48;
		count++;
	}
	if (negative % 2 != 0)
		return (number * -1);
	return (number);
}

int		ft_do_op(int val_1, int val_2, char op)
{
	int	res;

	res = 0;
	if (op == '+')
		res = val_1 + val_2;
	else if (op == '-')
		res = val_1 - val_2;
	else if (op == '*')
		res = val_1 * val_2;
	else if (op == '/')
		res = (val_2 != 0) ? (val_1 / val_2) : res;
	else if (op == '%')
		res = (val_2 != 0) ? (val_1 % val_2) : res;
	return (res);
}

char	ft_validate_op(char *str)
{
	char	res;

	res = '\0';
	if (str[0] == '*' && !(str[1]))
		res = '*';
	if (str[0] == '+' && !(str[1]))
		res = '+';
	if (str[0] == '-' && !(str[1]))
		res = '-';
	if (str[0] == '/' && !(str[1]))
		res = '/';
	if (str[0] == '%' && !(str[1]))
		res = '%';
	return (res);
}

int		ft_by_zero(char op, int val)
{
	if ((op == '/' || op == '%') && val == 0)
	{
		if (op == '%')
			write(1, "Stop : modulo by zero\n", 22);
		else
			write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		val_1;
	int		val_2;
	int		res;
	char	op;

	if (argc != 4)
		return (0);
	val_1 = ft_atoi(argv[1]);
	val_2 = ft_atoi(argv[3]);
	if ((op = ft_validate_op(argv[2])) == '\0')
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (!(ft_by_zero(op, val_2)))
		return (0);
	res = ft_do_op(val_1, val_2, op);
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}
