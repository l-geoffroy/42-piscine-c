/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:38:54 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/11 16:28:01 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		tmp_min;
	int		new_min;

	i = 0;
	while (i < size - 1)
	{
		new_min = i;
		tmp_min = i;
		while (tmp_min + 1 < size)
		{
			if (tab[tmp_min] < tab[new_min])
			{
				new_min = tmp_min;
			}
			tmp_min++;
		}
		ft_swap(&tab[new_min], &tab[i]);
		i++;
	}
}
