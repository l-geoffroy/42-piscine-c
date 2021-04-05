/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str_non_printable.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 14:35:18 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/14 14:36:57 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex11/ft_putstr_non_printable.c"

int		main(void)
{
	char	str[] = "salut a tous";
	char	str_non_printable[] = "salut a\ttous";

	ft_putstr_non_printable(str);
	printf("\n");
	ft_putstr_non_printable(str_non_printable);
	return (0);
}
