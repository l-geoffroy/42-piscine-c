/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:29:21 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/22 12:06:10 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		str_len;

	str_len = 0;
	while (str[str_len])
		str_len++;
	return (str_len);
}

int		main(int argc, char **argv)
{
	int		i;

	i = argc - 1;
	while (i > 0 && argv[i])
	{
		write(1, argv[i], ft_strlen(argv[i]));
		if (argv[i - 1])
			write(1, "\n", 1);
		i--;
	}
	return (0);
}
