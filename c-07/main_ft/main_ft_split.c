#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int     main(int argc, char **argv)
{
    char **tab;
    int i;

    i = 0;
    tab = ft_split(argv[1], argv[2]);
    while (i < 5)
    {
        printf("%s\n", tab[i]);
        i++;
    }
    (void)argc;
    return (0);
}