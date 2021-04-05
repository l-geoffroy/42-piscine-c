#include <sdio.h>
#include <stdlib.h>

int		ft_find_next_prime(int nb);

int     main(int argc, char **argv)
{
    char*     nb;

    nb = "ferfer";
    prinft("%d", ft_find_next_prime(nb));
    return (0);
}