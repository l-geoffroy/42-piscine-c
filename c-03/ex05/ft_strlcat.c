/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:48:19 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/17 10:48:30 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strlen(char *str)
{
	int		str_len;

	str_len = 0;
	while (str[str_len])
	{
		str_len++;
	}
	return (str_len);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	ret;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (!size)
		return (src_len);
	if (size < dest_len + 1)
		ret = size + src_len;
	else
		ret = src_len + dest_len;
	i = 0;
	while (src[i] && i + dest_len < size - 1)
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = 0;
	return (ret);
}
