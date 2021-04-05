/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_ultimate_range.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:16:01 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/25 11:21:38 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     ft_ultimate_range(int **tab, int min, int max); 

int		main(int argc, char **argv)
{
	int		min;
	int		max;
	int		i;
    int     size;
	int		*tab;

	min = atoi(argv[1]);
	max = atoi(argv[2]);
	i = 0;
	size = ft_ultimate_range(&tab, min, max);
	printf("Size: %d\n", size);
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
	free(tab);
	return (0);
}