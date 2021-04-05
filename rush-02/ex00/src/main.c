/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:03:28 by llalba            #+#    #+#             */
/*   Updated: 2021/03/31 13:34:51 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		ft_get_tens(unsigned int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

int		ft_get_pow(unsigned int nb)
{
	if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (ft_get_tens(nb));
}

void	ft_print(int n, t_dict *tab, int *first)
{
	int				i;
	unsigned int	pow;

	i = 0;
	pow = ft_get_pow(n);
	if (pow >= 100)
		ft_print(n / pow, tab, first);
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].nb != pow)
		i++;
	ft_putstr(tab[i].val);
	if (pow != 0 && n % pow != 0)
		ft_print(n % pow, tab, first);
}

void	ft_print_free(char *number, t_dict *tab, int *first)
{
	while (*number == '0')
	{
		number++;
	}
	ft_print(ft_uint_atoi(number), tab, first);
	write(1, "\n", 1);
	free(tab);
}

int		main(int argc, char **argv)
{
	t_dict		*tab;
	char		*number;
	int			addr_first;

	addr_first = 1;
	number = 0;
	if (argc == 3)
	{
		tab = ft_parse(argv[1]);
		number = argv[2];
	}
	else if (argc == 2)
	{
		tab = ft_parse(DEFAULT_DIC);
		number = argv[1];
	}
	if (number == 0 || ft_check_input(number) == -1)
		ft_error(DEFAULT_ERROR);
	else if (tab == 0)
		ft_error(DIC_ERROR);
	else
		ft_print_free(number, tab, &addr_first);
	return (0);
}
