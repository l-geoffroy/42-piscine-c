/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <unistd.h>

void ft_inter(char *str1, char *str2) {
    int i;
    int j;
    int ascii[256] = {0};

    i = 0;
    while (str2[i])
    {
        if (ascii[(int)str2[i]] == 0)
            ascii[(int)str2[i]] = 1;
        i++;
    }

    i = 0;
    j = 0;
    while (str1[i])
    {
        if (ascii[(int)str1[i]] == 1)
        {
            ascii[(int)str1[i]] = 2;
            write(1, &str1[i], 1);
        }
        i++;
    }

}

int     main(int argc, char **argv)
{
    if (argc != 3)
        return (0);
    ft_inter(argv[1], argv[2]);
    return (0);
}
