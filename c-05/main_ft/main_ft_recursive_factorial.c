/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_recursive_factorial.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:12:14 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/21 14:47:12 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_factorial(int nb);

int		main(int argc, char **argv)
{
	printf("%i! = %i\n", atoi(argv[1]), ft_recursive_factorial(atoi(argv[1])));
	return (0);
}
