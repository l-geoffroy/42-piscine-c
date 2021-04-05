#include <stdio.h>
#include <stdlib.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		is_sup(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		*tab;

	tab = (int *)malloc(sizeof(int) * argc - 1);
	i = 1;
	j = 0;
	while (i < argc)
	{
		tab[j] = atoi(argv[i]);
		printf("%d\n", tab[j]);
		i++;
		j++;
	}
	printf("is_sort: %s\n", ft_is_sort(tab, argc - 1, &is_sup) ? "sorted" : "not sorted");
}
