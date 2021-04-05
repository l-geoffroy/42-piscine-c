#include <stdio.h>
#include <stdlib.h>

#include <stdio.h> //DELETE
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int		is_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	return (0);
}

char	**ft_split(char *str)
{
	char **arr;
	int i;
	int j;
	int k;
	int len;
	
	i = 0;
	j = 0;
	len = ft_strlen(str);
	arr = (char **)malloc(sizeof(char*)*len + 1);
	while (str[i] != '\0')
	{
		k = 0;
		while (is_blank(str[i]) && str[i] != '\0')
			i++;
		if (str[i] != '\0')
		{
			arr[j] = (char*)malloc(sizeof(char) * len + 1);
			while (!is_blank(str[i]))
			{
				arr[j][k] = str[i];
				i++;
				k++;
			}
			arr[j][k] = '\0';
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}

int     main(int argc, char **argv)
{
    int     size;
    int     i;
    char **tab;

    size = atoi(argv[2]);
    i = 0;
    printf("%s\n", argv[1]);
    tab = ft_split(argv[1]);
    while (i < size)
    {
        printf("%s\n", tab[i]);
        i++;
    }
    return (0);
}