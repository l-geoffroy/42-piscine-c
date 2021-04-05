#include "ft.h"

int		ft_strlen(char *str)
{
	int		str_len;

	str_len = 0;
	while (str[str_len])
		str_len++;
	return (str_len);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putchar_hex(char nbr, char *base)
{
        long	nb;

        nb = nbr;
		if (nb < 0)
        {
        	ft_putchar('-');
            nb *= -1;
        }
        if (nb < 16)
		{
			ft_putchar(base[nb]);
		}
        if (nb >= 16)
        {
        	ft_putchar_hex(nb / 16, base);
            ft_putchar_hex(nb % 16, base);
        }
}