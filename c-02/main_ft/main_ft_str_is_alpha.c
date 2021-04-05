/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_alpha.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:07:50 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/14 11:13:58 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex02/ft_str_is_alpha.c"

int		main(void)
{
	char	str_non_alpha[] = "salut 42 ! @lgeoffro :)";
	char	str_alpha[] = "salut";

	printf("'%s': %i\n", str_non_alpha, ft_str_is_alpha(str_non_alpha));
	printf("'%s': %i\n", str_alpha, ft_str_is_alpha(str_alpha));
	return (0);
}
