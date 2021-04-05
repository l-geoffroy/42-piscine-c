

#include "ft_skyscrapers.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		size;

	size = 0;
	while (str[size])
	{
		size++;
	}
	write(1, str, size);
}

void	ft_display_grid(int board[4][4])
{
	int	rig;
	int col;					/* cette fonction sert simplement à afficher la grille */

	rig = 0;
	col = 0;
	while (rig < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(board[rig][col] + '0');
			(col == 3) ? col++ : ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		rig++;
	}
}
