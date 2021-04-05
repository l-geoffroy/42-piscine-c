#include <stdlib.h>
#include <stdio.h>

int 	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int no_words(char *s)
{
	int len = 0;

	while (*s)
	{
		if (ft_isspace(*s))
		{
			s++;
		}
		else
		{
			++len;
			while (*s && !ft_isspace(*s))
			{
				s++;
			}
		}
	}
	return (len);
}

char	**ft_split(char *str)
{
	char	**res;
	int		len;
	int		i;
    int     j;
    int     w;
    int     w_len;
    int     start;

	len = no_words(str);
	i = 0;
    j = 0;
    w_len = 0;
	res = (char **)malloc(sizeof(char*) * (len + 1));
	while (str[i] && j < len)
	{
        while (str[i] && ft_isspace(str[i]))
            i++;
        start = i;
        while (str[i] && !ft_isspace(str[i]))
        {
            w_len++;
            i++;
        }
        res[j] = (char *)malloc(sizeof(char) * (w_len + 1));
        w = 0;
        while (w_len)
        {
            res[j][w] = str[start];
            w_len--;
            start++;
            w++;
        }
        res[j][w] = '\0';
        j++;
	}
    res[j] = 0;
	return (res);
}

int main (int argc, char **argv)
{
	char** res;
	for (res = ft_split(argv[1]); *res != NULL; res++)
		printf("'%s',", *res);
	printf("\n");
	return (0);
}