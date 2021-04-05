/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:43:51 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/25 10:27:53 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	printf("%i\n", ft_atoi(argv[1]));
	return (0);
}
