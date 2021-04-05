/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llalba <llalba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 14:57:01 by llalba            #+#    #+#             */
/*   Updated: 2021/03/28 19:54:13 by llalba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H
# define DEFAULT_DIC "numbers.dict"
# define DIC_ERROR "Error\n"
# define DEFAULT_ERROR "Error\n"
# define MAX_NBR_LEN 128
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct			s_dict
{
	unsigned int		nb;
	char				*val;
}						t_dict;

char					*ft_getnb(int fd, char *c);
char					*ft_getval(int fd, char *c);
t_dict					*ft_parse(char *file);
char					*ft_strdup(char *src);
void					ft_putstr(char *str);
int						ft_atoi(char *str);
int						ft_uint_atoi(char *str);
int						ft_check_input(char *number);
void					ft_error(char *message);

#endif
