#include <stdlib.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int     i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
    long int nb;

	s = (char *)malloc(99);
    if (n < 0)
    {
        *s = '-';
        nb = -n;
    }
    else
        nb = n;
	s += ft_strlen(s);
    *s = '-';
	*s++ = 0;
	while((*--s = nb % 10 + '0') && (nb = nb / 10))
		;
	return (s);
}

int     main(int argc, char **argv)
{
    printf("%s\n", ft_itoa(atoi(argv[1])));
    (void)argc;
	return (0);
}
