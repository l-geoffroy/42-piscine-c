/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:51:25 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/21 14:51:52 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		result;

	result = nb;
	i = 1;
	if (nb == 1 || nb == 0)
		return (1);
	if ((nb < 0))
		return (0);
	while (i < nb)
	{
		result = (result * i);
		i++;
	}
	return (result);
}
