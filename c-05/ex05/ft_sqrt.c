/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:36:03 by lgeoffro          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/03/23 12:01:59 by lgeoffro         ###   ########.fr       */
=======
/*   Updated: 2021/03/22 12:19:23 by lgeoffro         ###   ########.fr       */
>>>>>>> c1890e105c431ee16afb45e15bd59f60d90a6886
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	i = 1;
<<<<<<< HEAD
	if (nb == 2)
		return (0);
	if (nb <= 0 || nb == 2)
		return (0);
=======
	if (nb <= 0 || nb == 2)
		return (0);
>>>>>>> c1890e105c431ee16afb45e15bd59f60d90a6886
	while (nb / i > i)
		i++;
	if ((nb % i) == 0)
		return (i);
	return (0);
}