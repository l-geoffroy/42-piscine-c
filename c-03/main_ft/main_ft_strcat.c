#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *s1, char *s2);

int		main(void)
{
	char 	s1[200] = "hello";
	char 	s2[] = "world";
	char	*result;

	result = ft_strcat(s1, s2);
	printf("%s\n", result);
	//printf("%s\n", strcat(s1, s2));
	return (0);
}
