/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 14:24:26 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/14 14:29:48 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex06/ft_str_is_printable.c""

int		main(void)
{
	char	str[] = "salut a tous";
	char	str_non_printable[] = "salut\ta tous";
	
	printf("'%s': %i\n", str, ft_str_is_printable(str));
	printf("'%s': %i", str_non_printable, ft_str_is_printable(str_non_printable));
	return (0);
}
