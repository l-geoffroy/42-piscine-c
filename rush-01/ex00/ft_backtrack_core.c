
#include "ft_skyscrapers.h"
#include <stdio.h>

int		ft_is_full(int grid[4][4], int *row, int *col)         
{
	*row = 0;							/* cette fonction a pour rôle de check si la grille est complètement remplie */
	*col = 0;							/* elle parcourt la grille est regarde si il reste les 0 que nous avions mis dedans au début */
	while (*row < 4)
	{
		*col = 0;
		while (*col < 4)
		{
			if (grid[*row][*col] == 0)
				return (1);
			*col += 1;
		}
		*row += 1;
	}
	return (0);
}

int		ft_is_col_safe(int grid[4][4], int col, int val)	/* on check si il y a des doubles dans la colonne*/
{
	int row;

	row = 0;
	while (row < 4)
	{
		if (grid[row][col] == val)
		{
			return (0);
		}
		row++;
	}
	return (1);
}

int		ft_is_row_safe(int grid[4][4], int row, int val)	/* on check si il y a des doublons dans la row */
{
	int col;

	col = 0;
	while (col < 4)
	{
		if (grid[row][col] == val)
			return (0);
		col++;
	}
	return (1);
}

int		ft_main_check(int grid[4][4], int row, int col, int val)
{
	if (((ft_is_row_safe(grid, row, val)) && (ft_is_col_safe(grid, col, val))
				&& (grid[row][col] == 0)))
		return (1);
	return (0);
}

int		ft_backtrack(int grid[4][4], int *views)
{
	int		i;
	int		row;	/* Cette fonction gère tout le backtracking en partant de la grille partiellement remplis dans ft_init.c */
	int		col;		
	int		val;

	val = 1;	/* val commence à 1 car il n'y peut pas y avoir de valeur infèrieur à 1 dans notre grille */
	i = 0;
	if ((ft_is_full(grid, &row, &col) == 0) &&  /* on check si la grille est remplie */
		(ft_check_grid(grid, views) == 1))      /* on check si la grille est valide */
		return (1);
	while (val <= 4)
	{
		if (ft_main_check(grid, row, col, val))		/* ft_main_check lance les fonctions qui check les doublons */
		{
			grid[row][col] = val;					/* si il n'y a pas de doublons alors on met à jour nos nouvelles valeurs */
			ft_display_grid(grid); // /!\ cette ligne n'est pas dans le projet push, elle sert juste à voir la grille se remplir
			printf("\n");
			if (ft_backtrack(grid, views) == 1)		/* on relance ft_backtrack en recursif avec notre grille mise à jour */
				return (1);
			grid[row][col] = 0;						/* si on ne trouve pas de solution on remet cette position à 0 */
		}
		val++;
	}
	return (0);
}
