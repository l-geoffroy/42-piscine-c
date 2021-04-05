/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_uppercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:23:58 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/14 11:25:43 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex05/ft_str_is_uppercase.c"

int		main(void)
{
	char	*str_up;
	char	*str_low;

	str_up = "SALUT";
	str_low = "sAlUt";
	printf("'%s': %i\n", str_up, ft_str_is_uppercase(str_up));
	printf("'%s': %i\n", str_low, ft_str_is_uppercase(str_low));
	return (0);
}
