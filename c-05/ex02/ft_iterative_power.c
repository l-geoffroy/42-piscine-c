/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:36:41 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/24 16:14:43 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (result);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = (result * nb);
		power--;
	}
	return (result);
}
