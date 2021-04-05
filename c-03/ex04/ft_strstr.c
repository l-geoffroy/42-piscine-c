/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:46:42 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/17 10:52:59 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	i_2;
	char			*result;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		i_2 = 0;
		while (str[i + i_2] == to_find[i_2])
		{
			i_2++;
			if (to_find[i_2] == '\0')
			{
				result = &str[i];
				return (result);
			}
		}
		i++;
	}
	return (0);
}
