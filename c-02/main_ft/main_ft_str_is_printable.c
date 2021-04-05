#include <stdio.h>
#include "../ex06/ft_str_is_printable.c"

int     main(void)
{
    char str_1[] = "salut a tous";
    char str_2[] = "salut\ta\ntous";
    printf("Printable: %i\n", ft_str_is_printable(str_1));
    printf("Non printable: %i\n", ft_str_is_printable(str_2));
    return (0);
}
