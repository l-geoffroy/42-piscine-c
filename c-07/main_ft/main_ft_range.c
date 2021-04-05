/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:15:59 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/25 11:22:11 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int min, int max);

int		main(int argc, char **argv)
{
	int		min;
	int		max;
	int		*tab;
	int		i;

	min = atoi(argv[1]);
	max = atoi(argv[2]);
	i = 0;
	tab = ft_range(min, max);
	if (argc != 3)
	{
		return (0);
	}
	if (!(tab))
		return (0);
	while (i < max - min)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}