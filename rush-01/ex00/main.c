
#include "ft_skyscrapers.h"

int		ft_validate_arg(char *arg)
{						
	int		i;			/* Cette fonction sert à vérifier si l'input envoyer est cohérent */
	int		check;		/* elle va regarder que l'input est résolvable via des critères très simple */	

	i = 0;
	check = 0;
	while (arg[i])
	{
		if (arg[i] == '4')		/* On regarde le nombre de '4' qu'on a dans notre input */
			check++;			/* on sauvegarde le nb de '4' dans la variable 'check' */
		i++;
	}
	if (check > 2) 				/* Si il y a plus de deux '4' alors l'input n'est pas solvable */
		return (0);
	i = 0;
	check = 0;					/* On check un autre critère donc on remet i et check à 0 */
	while (arg[i])				/* on parcours notre argument (celui de la ligne de commande) */
	{
		if (arg[i] == '1')		/* on compte le nombre de '1' */
			check++;
		i++;
	}
	if (check != 4)				/* Si il n'y a pas 4 fois '1' alors la grille n'est pas résolvable */
		return (0);				/* on retourne 0 et dans la fonction ft_parse_arg */
	
	
	return (1);					/* Si les critères du dessus sont respectés alors on renvoie 1, on continue le programme */		
}

int		ft_parse_arg(char *arg, int *views)
{
	int		i;
	int		end;		/* 'end' serra notre compteur pour les chiffres de l'input, il doit y en avoir 16 (pour une */
						/* grille 4x4) */

	i = 0;
	end = 0;
	if (ft_validate_arg(arg) == 1)  /* on envoie l'arg à ft_validate_arg et on vérifie si son retour est bien égal à 1 */
	{
		while (arg[i])				/* On parcours notre argument */
		{
			if ((arg[i] >= '1' && arg[i] <= '4') && ((arg[i + 1] == ' ')    /* si les char ne sont pas entre '1' et '4' et si le char d'après n'est pas */
					|| ((arg[i + 1] == 0) && (arg[i - 1] == ' '))))			/* un espace ou une fin de chaîne de charactère (0) */
			{
				views[end] = (arg[i] - '0'); 						/* on remplit notre tableau views avec les valeurs de la ligne de commande */
				end++;
				i++;
			}
			if (arg[i] == ' ' || arg[i] == '\t')				/* on passe à la suite si arg[i] est un espace ou un tab ('\t') */
				i++;
			else
				return (end);								/* on retourne le nombre de chiffres que l'on a trouvé suivant les critères du dessus */
		}
		views[end] = '\0';									/* on termine notre tableau */
		return (end);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int views[16]; /* Tableau pour les angles de vues (passé en paramètre sur la ligne de commande) */
	int i;
	int k;

	i = 0;
	k = 0;
	if (argc == 2) /* Si il n'y a que 2 arguments dans la ligne de commande (nom du programme et l'input) */
	{
		i = ft_parse_arg(argv[1], views); /* Fonction pour mettre le paramètre de la ligne de commande dans */
		if (i == 16)					 	 									   /* notre tableau 'views' */
			ft_init_grid(views);		/* Instanciation de notre grille (ft_init.c), on lui envoie les angles de vues en paramètres */
		else
			ft_putstr("Error\n");		/* SI ft_parse_arg retourn plus de 16 (16 élements dans la ligne de cmd) alors on affiche erreur */
	}
	else
		ft_putstr("Error\n"); /* Si le nb d'arg != 2 */
	return (0);
}
