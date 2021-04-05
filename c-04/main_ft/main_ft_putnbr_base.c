#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_base(int nb, char *base);

int		main(int argc, char **argv)
{
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
