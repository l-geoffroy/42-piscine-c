/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:08:44 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/14 10:59:37 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../ex00/ft_strcpy.c"

int     main(void)
{
    char    *str_src;
    char    *str_src_2;
    char    str_dest[50];
    char    str_dest_2[50];

    str_src = "slttttt";
    str_src_2 = "slttttt";
    printf("ft_strcpy: %s\n", ft_strcpy(&str_dest, str_src));
    printf("strcpy: %s\n", strcpy(&str_dest, str_src));
    return (0);
}
