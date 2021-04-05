/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:23:31 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/25 10:33:53 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_in_base(char c, char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int		ft_len_base(char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (ft_in_base(base[i], base + i + 1) >= 1
			|| base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int signe;
	int num;
	int base_len;

	base_len = ft_len_base(base);
	signe = 1;
	num = 0;
	if (base_len < 2)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			signe *= -1;
	while ((i = ft_in_base(*str, base)) >= 0)
	{
		num = num * base_len + i;
		str++;
	}
	return (num * signe);
}
