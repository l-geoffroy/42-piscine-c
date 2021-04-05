/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:22:07 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/23 15:44:50 by lgeoffro         ###   ########.fr       */
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
	int		a;

	i = 1;
<<<<<<< HEAD
	a = argc;
	while (argv[i])
	{
		write(1, argv[i], ft_strlen(argv[i]));
		if (argv[i])
			write(1, "\n", 1);
=======
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		ft_linefeed();
>>>>>>> c1890e105c431ee16afb45e15bd59f60d90a6886
		i++;
	}
	return (0);
}
