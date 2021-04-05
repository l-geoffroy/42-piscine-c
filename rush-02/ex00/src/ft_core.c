/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_core.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:28:15 by llalba            #+#    #+#             */
/*   Updated: 2021/03/31 16:12:52 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		*ft_parse_nb(int fd, char *c)
{
	int		i;
	char	*str;

	if (!(str = malloc(sizeof(char) * MAX_NBR_LEN)))
		return (0);
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = 0;
	return (str);
}

char		*ft_parse_value(int fd, char c[0])
{
	int		i;
	char	*str;

	if (!(str = malloc(sizeof(char) * MAX_NBR_LEN)))
		return (0);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = 0;
	return (str);
}

int			ft_parse_line(int fd, int i, char *cursor, t_dict *tab)
{
	char	*nb;
	char	*tmp;

	if (!(nb = ft_parse_nb(fd, cursor)))
		return (0);
	else
		tab[i].nb = ft_uint_atoi(nb);
	while (cursor[0] == ' ')
		read(fd, cursor, 1);
	if (cursor[0] == ':')
		read(fd, cursor, 1);
	else
		return (0);
	while (cursor[0] == ' ')
		read(fd, cursor, 1);
	if (!(tmp = ft_parse_value(fd, cursor)))
		return (0);
	tab[i].val = ft_strdup(tmp);
	free(tmp);
	return (1);
}

int			ft_count_lines(int fd)
{
	int		lines;
	char	c[1];

	lines = 0;
	while (read(fd, c, 1))
		if (*c == '\n')
			lines++;
	if (close(fd) == -1)
		return (0);
	return (lines + 1);
}

t_dict		*ft_parse(char *dict)
{
	int		i;
	int		fd;
	int		dict_lines;
	char	cursor[1];
	t_dict	*tab;

	fd = open(dict, O_RDONLY);
	if (!(dict_lines = ft_count_lines(fd)))
		return (0);
	fd = open(dict, O_RDONLY);
	if (fd == -1 || !(tab = malloc(sizeof(t_dict) * (dict_lines + 1))))
		return (0);
	i = 0;
	while ((i += 1) < dict_lines)
		if (!(ft_parse_line(fd, i, cursor, tab)))
			return (0);
	tab[i].val = 0;
	tab[i].nb = 0;
	if (close(fd) == -1)
		return (0);
	return (tab);
}
