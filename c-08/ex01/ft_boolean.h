/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:54:09 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/26 15:59:49 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define SUCCESS	0
# define TRUE		1
# define FALSE		0
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define EVEN(nbr)	((nbr % 2) == 0 ? TRUE : FALSE)

typedef int	t_bool;
void		ft_putstr(char *str);
t_bool		ft_is_even(int nbr);

#endif
