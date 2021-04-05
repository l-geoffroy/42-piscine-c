/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strupcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:26:45 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/14 11:29:57 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex07/ft_strupcase.c"

int		main(void)
{
	char	str[] = "salut";
	printf("%s\n", str);
	printf("%s\n", ft_strupcase(str));
	return (0);
}
