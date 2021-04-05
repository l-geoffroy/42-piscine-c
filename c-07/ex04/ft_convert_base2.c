int		char_length(char *nbr, char *base);
int		b_check(char *base);
char	*nbr_to_base(long nbr, char *to_base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		ft_strlen(char *str);
int		biggest_power(long nbr, int base_s);
long	pwr(int x, int y);
int		to_b10(char *mychar, char *base);
void	catch_min_int(long *nb_ptr, char *tab, int *position_ptr);

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		biggest_power(long nbr, int base_s)
{
	int	exposant;

	exposant = 0;
	while (nbr / pwr(base_s, exposant + 1) > 0)
		exposant++;
	return (exposant);
}

long	pwr(int x, int y)
{
	int		i;
	long	result;

	i = 0;
	result = 1;
	while (i < y)
	{
		result = (long)result * (long)(x);
		i++;
	}
	return (result);
}

int		to_b10(char *mychar, char *base)
{
	int	i;

	i = 0;
	while (base[i] != *mychar)
		i++;
	return (i);
}

void	catch_min_int(long *nbr, char *tab, int *position)
{
	if ((*nbr) < 0)
	{
		(*nbr) *= -1;
		tab[0] = '-';
		(*position)++;
	}
}
