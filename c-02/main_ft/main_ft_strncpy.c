/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:00:40 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/14 11:06:28 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex01/ft_strncpy.c"
#include <string.h>

int		main(void)
{
	char	*str_src;
	char	*str_src_2;
	char	*dest;
	char	*dest_2;

	str_src = "salut";
	str_src_2 = "salut";
	printf("ft_strncpy(): %s\n", ft_strncpy(&dest, str_src, 3));
	printf("Vrai strncpy(): %s\n", strncpy(&dest, str_src, 3));
	return (0);
}
