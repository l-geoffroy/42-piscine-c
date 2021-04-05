#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_power(int nb, int power);

int		main(int argc, char **argv)
{
	printf("%d\n", argc);
	printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}