#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int		i;
	int		sum;

	i = 0;
	sum = 0;
	while (i < atoi(argv[1]))
	{
		sum += i;
		i++;
	}
	printf("%d\n", sum);
	(void)argc;
	return (0);
}
