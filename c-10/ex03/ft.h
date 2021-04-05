/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:42:29 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/31 16:51:32 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_stdin(void);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putchar_hex(char nbr, char *base);

#endif
