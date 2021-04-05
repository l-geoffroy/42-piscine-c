#include <stdio.h>
#include <stdlib.h>

int		ft_intlen(int nb)
{
	int		i;

	i = 0;
	while (nb > 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	char	*str;
	int		len;
	unsigned int nb;

	str = "0123456789";
	len = (nbr < 0) ? 1 : 0;
	nb = (nbr < 0) ? -(unsigned int)nbr : nbr;
	len += ft_intlen(nb);
	len = (nbr == 0) ? 1 : len;
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (nbr == 0)
		res[0] = '0';
	res[len] = '\0';
	while (nb > 0)
	{
		res[--len] = str[nb % 10];
		nb /= 10;
	}
	if (nbr < 0)
		res[0] = '-';
	return (res);
}

int		main(int argc, char **argv)
{
	printf("%s\n", ft_itoa(atoi(argv[1])));
	(void)argc;
	return (0);
}
