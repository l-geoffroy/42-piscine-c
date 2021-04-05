#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    int     i;
    int     j;

    i = 1;
    j = 0;
    while (i)
    {
        printf("%s\n", argv[j]);
        j++;
    }
    return (0);
}