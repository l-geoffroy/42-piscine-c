#include <stdio.h>

int		ft_any(char **tab, int(*f)(char*));

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
	int		i;

	i = 0;
	printf("%d\n", ft_any(argv, &ft_is_a));
	return (0);
}
