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
#include "../ex10/ft_strlcpy.c"
#include <string.h>

int		main(void)
{
	char	str_src[] = "salut a tous";
	char	str_src_2[] = "salut a tous";
	char	dest[50];
	char	dest_2[50];

	printf("Vrai strlcpy(): %s\n", strlcpy(dest, str_src, 3));
	printf("ft_strlcpy(): %s\n", ft_strlcpy(dest, str_src, 3));
	return (0);
}
