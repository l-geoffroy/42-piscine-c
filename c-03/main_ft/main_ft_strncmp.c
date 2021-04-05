#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, int size);

int		main(int argc, char **argv)
{
	printf("%i\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("%i\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
