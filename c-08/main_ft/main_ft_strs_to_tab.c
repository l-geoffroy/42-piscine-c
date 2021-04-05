#include <stdio.h>
#include <stdlib.h>
#include "../ex04/ft_stock_str.h"

int		ft_strlen(char *str);
char	*ft_strdup(char *src);
struct s_stock_str  *ft_param_to_tab(int ac, char **av);

int		main(int argc, char **argv)
{
	int		i;
	int		size;
	int		j;
	char	**tab;
	t_stock_str		*stock;

	i = 0;
	j = 2;
	size = atoi(argv[1]);
	tab = (char **)malloc(sizeof(char *) * (size + 1));
	while (i < argc)
	{
		tab[i] = ft_strdup(argv[j]);
		j++;
		i++;
	}
	i = 0;
	j = 2;
	stock = ft_param_to_tab(size, tab);
	while (j < argc)
	{
		printf("%s\n", tab[i]);
		i++;
		j++;
	}
	i = 0;
	while (i < size)
	{
		printf("Stock: %s\n", stock[i].str);
		i++;
	}
	//ft_param_to_tab(size, tab);
	(void)argc;
	return (0);
}