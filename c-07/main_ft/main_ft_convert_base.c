/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_convert_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:18:48 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/24 17:51:37 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int     main(int argc, char **argv)
{
	printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	(void)argc;
    return (0);
}