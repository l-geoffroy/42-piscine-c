/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:37:06 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/25 15:59:27 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_check_charset(char to_find, char *str)
{
	while (*str)
	{
		if (to_find == *str++)
			return (1);
	}
	return (0);
}

int			ft_count(char *str, char *charset)
{
	int		count;

	count = 0;
	while (*str)
	{
		while (*str && (ft_check_charset(*str, charset)))
			str++;
		if (*str && !(ft_check_charset(*str, charset)))
		{
			count++;
			while (*str && !(ft_check_charset(*str, charset)))
				str++;
		}
	}
	return (count);
}

char		*ft_create_str(char *str, int i, int j)
{
	char	*word;
	int		o;

	o = 0;
	if ((word = (char *)malloc(sizeof(char) * (j - i))) == ((void *)0))
		return ((void *)0);
	while (i < j)
	{
		word[o] = str[i];
		i++;
		o++;
	}
	word[o] = '\0';
	return (word);
}

int			ft_split_2(char *str, char *charset, char **arr, int w)
{
	int		i;
	int		j;
	int		index;

	i = 0;
	j = 0;
	index = 0;
	while (index < w)
	{
		while (ft_check_charset(str[i], charset) && (str[i]))
			i++;
		j = i;
		while (!(ft_check_charset(str[j], charset)) && (str[j]))
			j++;
		arr[index] = ft_create_str(str, i, j);
		i = j + 1;
		index += 1;
	}
	return (index);
}

char		**ft_split(char *str, char *charset)
{
	char	**arr;
	int		index;
	int		w;

	index = 0;
	if ((w = ft_count(str, charset)))
	{
		arr = (char **)malloc(sizeof(char *) * (w + 1));
		if (!str || arr == ((void *)0))
			return ((void *)0);
		index = ft_split_2(str, charset, arr, w);
	}
	else
		arr = (char **)malloc(sizeof(char *));
	arr[index] = (void *)0;
	return (arr);
}
