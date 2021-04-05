/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:48:23 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/25 15:53:38 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = ft_strlen(src);
	if ((dest = malloc(sizeof(*src) * (len + 1))) == ((void *)0))
		return (((void *)0));
	while (len >= 0)
	{
		dest[len] = src[len];
		len--;
	}
	return (dest);
}
