/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_is_lowercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:19:53 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/14 11:23:08 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex04/ft_str_is_lowercase.c"

int		main(void)
{
	char	*str_low;
	char	*str_non_low;

	str_low = "salut";
	str_non_low = "sAluT";
	printf("'%s': %i\n", str_low, ft_str_is_lowercase(str_low));
	printf("'%s': %i\n", str_non_low, ft_str_is_lowercase(str_non_low));
	return (0);
}
