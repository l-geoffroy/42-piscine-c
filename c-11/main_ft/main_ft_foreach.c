int		ft_strlen(char *str)
{
        int             str_len;

        str_len = 0;
        while (str[str_len])
                str_len++;
        return (str_len);
}

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
        long int        l;

        l = nb;
        if (l < 0)
        {
                ft_putchar('-');
                l = l * -1;
        }
        if (l >= 10)
        {
                ft_putnbr(l / 10);
                ft_putchar((l % 10) + '0');
        }
        else
                ft_putchar(l + '0');
}

#include <stdlib.h>

void    ptnbr(int i)
{
    printf("%d\n", i);
}

int		main(int argc, char **argv)
{
	int		*tab;
	int		i;
	int		size;
	int		j;

	i = 0;
	size = 0;
	j = 0;
	while (j < argc)
	{
		size += ft_strlen(argv[j]);
		j++;
	}
	tab = (int *)malloc(sizeof(int) * (size + 1));
	while (i < argc)
	{
		tab[i] = atoi(argv[i]);
		i++;
	}
	ft_foreach(tab, argc, &ptnbr);
	return (0);
}
