#include <stdio.h>
#include <stdlib.h>

int		ft_is_prime(int nb);

int		main(int argc, char **argv)
{
	printf("%i\n", ft_is_prime(atoi(argv[1])));
	return (0);
}
