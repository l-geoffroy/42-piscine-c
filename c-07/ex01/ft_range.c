/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:36:50 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/25 10:40:00 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;
	int		j;

	tab = (max > min) ? (int *)malloc(sizeof(*tab) * (max - min)) : NULL;
	i = min;
	j = 0;
	if (tab != NULL)
	{
		while (i < max)
		{
			tab[j] = i;
			i++;
			j++;
		}
	}
	else
	{
		return (tab);
	}
	return (tab);
}
