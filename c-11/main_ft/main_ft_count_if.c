#include <stdlib.h>
#include <stdio.h>

int		ft_is_a(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'A' || str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	printf("res: %d\n", ft_count_if(argv, argc, &ft_is_a));
	return (0);
}