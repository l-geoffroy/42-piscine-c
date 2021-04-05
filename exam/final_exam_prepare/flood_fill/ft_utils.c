#include "test_functions.h"
#include <unistd.h>
#include <stdio.h>

void	ft_putc(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;
	
	i = 0;
	while (str[i])
	{
		ft_putc(str[i]);
		i++;
	}
}

void	print_tab(char *zone[], t_point *size)
{
	for (int y = 0; y < size->y; y++)
	{
		for (int x = 0; x < size->x; x++)
		{
			if (x != 0)
				printf(" ");
			printf("%c", zone[y][x]);
		}
		printf("\n");
	}
}