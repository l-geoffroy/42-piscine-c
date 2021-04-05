
#include "ft_skyscrapers.h"

void	ft_fill_1(int grid[4][4], int *views, int pos)
{
	int fill;

	fill = 0;
	while ((views[pos]) && pos <= 15)									/* on refait la même chose que dans ft_fill */
	{																	/* en utilisant les angles de gauche et de droite (les rows) */
		if ((views[pos] == 4) && ((pos >= 8 && pos <= 11)))
			while (fill < 4)
			{
				grid[pos % 4][fill] = fill + 1;
				fill++;
			}
		fill = 4;
		if ((views[pos] == 4) && ((pos >= 12 && pos <= 15)))
			while (fill > 0)
			{
				grid[pos % 4][4 - fill] = fill;
				fill--;
			}
		pos++;
	}
}

void	ft_fill(int grid[4][4], int *views)
{
	int pos;
	int value;

	value = 0;
	pos = 0;
	while ((views[pos]) && pos < 8)								/* cette fonction remplis la grille selon  les angles */
	{															/* du haut et du bas de views[0] jusqu'à views[7] */
		
		if ((views[pos] == 4) && ((pos >= 0 && pos <= 3)))		/* si l'angle est à 4 on doit mettre dans cette colonnes 1, 2, 3, 4 */
			while (value < 4)
			{										
				grid[value][pos] = value + 1; 					/* si la pos est < à value on ajout sur les 4 cases value + 1 */
				value++;										
			}
		value = 4;
		if ((views[pos] == 4) && ((pos >= 4 && pos <= 7)))		/* on refait la même chose pour les angles du bas*/
			while (value > 0)
			{
				grid[4 - value][(pos % 4)] = value;
				value--;										/* on change juste l'incrémentation du haut en décrémentation */
			}										/* on aura alors 4, 3, 2, 1 vus du bas et 1, 2, 3, 4 vus du haut */
		pos++;	
	}
	ft_fill_1(grid, views, pos);					/* cette fonction c'est juste pour éviter d'avoir une fonction de + de 25 lignes */
}

void	ft_start_fill(int grid[4][4], int *views)
{
	int		pos;

	pos = 0;
	while (views[pos])
	{
		if ((views[pos] == 1) && ((pos >= 0) && (pos <= 3)))   /* ces conditions servent à trouver*/
			grid[0][pos] = 4;								  /* de quel angle de vue on parle et on attribut des valeurs */
		if ((views[pos] == 1) && ((pos >= 4) && (pos <= 7))) /* dans la grille selon ces angles de vues */
			grid[3][pos - 4] = 4;
		if ((views[pos] == 1) && ((pos >= 8) && (pos <= 11)))
			grid[pos - 8][0] = 4;
		if ((views[pos] == 1) && ((pos >= 12) && (pos <= 15))) /*par exemple si pos est entre 12 et 15 (inclus) on parle des angles de vues de droites*/
			grid[pos - 12][3] = 4;							  /* si l'angle est egal à 1 on sait que l'on doit forcèment mettre une caisse de hauteur 4 a la premiere case de cette angle*/
		pos++;
	}
	return ;
}

int		ft_init_grid(int *views)
{
	int		grid[4][4];     /* instancie notre grille de jeu 4x4 */
	int		col;
	int		row;

	row = 0;
	col = 0;
	while (row < 4)				/* dans ce bloc de code on parcours les rows (lignes) */
	{
		col = 0;
		while (col < 4)			/* on parcours les colonnes */
		{
			grid[row][col] = 0;		/* on remplis notre grille de 0 pour le moment */
			col++;
		}
		row++;
	}
	ft_start_fill(grid, views);  /* fonction permettant de commencer à remplir la grille selon les angles de vues envoyés (views) */
	ft_fill(grid, views);		/* ft_fill et ft_fille_1 servent aussi à remplir intelligement la grille selon les angles */
	if ((ft_backtrack(grid, views)) == 1) /* on lance notre backtracking (ft_backtrack_core.c) avec la grille mis à jour et les angles de vues */
		ft_display_grid(grid);  /* si ft_backtrack renvoie 1 ça veut dire qu'elle a trouvé une solution et on affiche la grille avec ft_display */
	else
		ft_putstr("Error\n");	/* si ft_backtrack renvoie 0 alors on affiche un message d'erreur */
	return (0);
}
