#include <stdio.h>
#include <stdlib.h>

int 	*ft_map(int *tab, int length, int(*f)(int));

int		ft_double(int nb)
{
	return (nb * 2);
}

int		main(int argc, char **argv)
{
	int		*tab;
	int		i;
	int		*res;

	i = 0;
	tab = (int *)malloc(sizeof(int) * argc);
	while (i < argc)
	{
		tab[i] = atoi(argv[i]);
		i++;
	}
	res = ft_map(tab, argc, &ft_double);
	i = 0;
	while (i < argc)
	{
		printf("%d\n", res[i]);
		i++;
	}
	return (0);
}