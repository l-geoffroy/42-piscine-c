/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 16:00:59 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/03/14 16:31:42 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y)
{
	int		w; /* On initialise 2 iterateurs (w pour la largeur x et h pour la hauteur y) */
	int		h;

	w = 1; /* On leur attribut 1 pour la faire commecer notre curseur sur la premiere case x=1 y=1 */
	h = 1;
	while (h <= y) /* On commence a se deplacer sur notre grille en partant de l'angle haut gauche  */
	{
		while (w <= x) /* Boucle pour se deplacer vers la gauche jusqu'au bout de la ligne */
		{
			if (h == 1 && (w == 1 || w == x)) /* Si on est a la ligne 1 et sur le premiere case ou la derniere */
				ft_putchar('A');
			else if (h == y && (w == 1 || w == x)) /* Sinon si on est a la derniere ligne et sur la premiere ou derniere case */
				ft_putchar('C');
			else if ((w > 1 && w < x && (h == 1 || h == y)) || /* Sinon si notre curseur de largeur est pas sur la premiere et la derniere et on est sur la premiere ligne ou la derniere */
					(h > 1 && h < y && (w == 1 || w == x))) /* ou sur une ligne superieur a la premiere et inferieur a le derniere (entre les deux en gros) et si on est pas dans les angles */
				ft_putchar('B');
			else /* Sinon si aucune des conditions du dessus n'est bonne alors on affiche */
				ft_putchar(' '); /* un espace */
			if (w == x) /* Si notre curseur de largeur est au bout de la ligne (x) */
				ft_putchar('\n'); /* alors on affiche un retour a la ligne */
			w++; /* au decale de 1 vers la droite notre curseur de largeur (w) */
		}
		w = 1; /* on remet notre curseur w au debut de la ligne suivant */
		h++; /* on augmente de 1 h pour passer a la ligne suivante */
	}
}

