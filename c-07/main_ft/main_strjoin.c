/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:16:06 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/24 10:48:24 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int     main(int argc, char **argv)
{
	char    *str[] = {"hello", "world", "\t\r\r\n", "42"};
	int     i;
	int		size = sizeof(str)/sizeof(str[0]);
	char    *str_2 = ft_strjoin(size, str, argv[1]);
	//int		**test;

	i = -1;
	(void)argc;
	printf("%s\n", str_2);
	/*test = (int **)malloc(sizeof(int) * 8);
	while (i++ < 8)
		test[i] = &i;*/
	free(str_2);
	return (0);
}