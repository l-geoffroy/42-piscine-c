/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 16:01:07 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/04/01 14:45:54 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		tmp;
	int		tmp_2;

	i = 1;
	while (i < length && !(tmp = (*f)(tab[i - 1], tab[i])))
		i++;
	while (i < length)
	{
		tmp_2 = (*f)(tab[i - 1], tab[i]);
		if ((tmp < 0 && tmp_2 > 0) || (tmp > 0 && tmp_2 < 0))
			return (0);
		i++;
	}
	return (1);
}
