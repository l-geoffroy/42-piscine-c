/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:46:01 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/17 10:50:04 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		i;
	unsigned int		i_2;

	i = 0;
	i_2 = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i_2] != '\0' && i_2 < nb)
	{
		dest[i] = src[i_2];
		i_2++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
