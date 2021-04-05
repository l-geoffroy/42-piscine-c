/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:09:52 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/23 13:44:08 by lgeoffro         ###   ########.fr       */
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

	i = 0;
<<<<<<< HEAD
	a = argc;
=======
	if (argc != 1)
	{
		return (0);
	}
>>>>>>> c1890e105c431ee16afb45e15bd59f60d90a6886
	write(1, argv[0], ft_strlen(argv[0]));
	write(1, "\n", 1);
	return (0);
}
