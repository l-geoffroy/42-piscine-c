/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:31:57 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/22 12:19:15 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;
	int		m;
	int		f;

	m = nb / 2;
	i = 2;
	f = 1;
	if (nb <= 1)
		return (f);
	while (i <= m)
	{
		if (nb % i == 0)
		{
			f = 0;
		}
		i++;
	}
	return (f);
}

int		ft_find_next_prime(int nb)
{
	int	i;

	if (nb >= 2147483641)
		return (2147483647);
	if (nb < 2)
		nb = 2;
	i = nb;
	while (1)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
