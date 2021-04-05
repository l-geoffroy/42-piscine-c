#include <stdio.h>
#include <stdlib.h>

int		ft_iterative_factorial(int nb);

int		main(int argc, char **argv)
{
	printf("%i\n", ft_iterative_factorial(atoi(argv[1])));
}
