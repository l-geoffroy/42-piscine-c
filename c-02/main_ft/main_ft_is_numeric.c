/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:14:50 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/14 11:19:05 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex03/ft_str_is_numeric.c"

int		main(void)
{
	char	str_num[] = "256";
	char	str_non_num[] = "salut 00";

	printf("'%s': %i\n", str_num, ft_str_is_numeric(str_num));
	printf("'%s': %i\n", str_non_num, ft_str_is_numeric(str_non_num));
	return (0);
}
