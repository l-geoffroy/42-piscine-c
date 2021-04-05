#include <stdlib.h>

int		ft_strlen(char *str);
int		biggest_power(long nbr, int base_s);
long	pwr(int x, int y);
int		to_b10(char *mychar, char *base);
void	catch_min_int(long *nb_ptr, char *tab, int *position_ptr);

int		char_length(char *nbr, char *base);
int		b_check(char *base);
char	*nbr_to_base(long nbr, char *to_base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		char_length(char *nbr, char *base)
{
	int	i;
	int	k;
	int	pas_dans_la_base;

	pas_dans_la_base = 0;
	i = 0;
	while (nbr[i] && (!(pas_dans_la_base)))
	{
		k = 0;
		pas_dans_la_base = 0;
		while (nbr[i] != base[k++])
		{
			if (!(base[k - 1]))
			{
				pas_dans_la_base = 1;
				break ;
			}
		}
		if (!(pas_dans_la_base))
			i++;
	}
	return (i);
}

int		b_check(char *base)
{
	int	j;
	int	k;
	int	base_len;

	j = -1;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2)
		return (0);
	while (base[++j])
	{
		if (base[j] == ' ' || base[j] == '\n' || base[j] == '\t' ||
			base[j] == '\v' || base[j] == '\f' || base[j] == '\r' ||
			base[j] == '+' || base[j] == '-')
			return (0);
		k = j;
		while (base[++k])
			if (base[j] == base[k])
				return (0);
	}
	return (base_len);
}

char	*nbr_to_base(long nbr, char *to_base)
{
	char	*tab;
	int		position;
	int		max_power;
	int		base_size;

	position = 0;
	if (!(tab = (char *)malloc(sizeof(char) * 60)))
		return (0);
	catch_min_int(&nbr, tab, &position);
	base_size = ft_strlen(to_base);
	max_power = biggest_power(nbr, base_size);
	while (max_power >= 0)
	{
		tab[position++] = to_base[nbr / pwr(base_size, max_power)];
		nbr = nbr % pwr(base_size, max_power);
		max_power--;
	}
	while (position <= 59)
		tab[position++] = 0;
	return (tab);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	is_positive;
	int		len;
	long	b10;
	int		i;

	is_positive = 1;
	b10 = 0;
	i = 0;
	if (b_check(base_from) == 0 || b_check(base_to) == 0)
		return (0);
	while (*nbr == 32 || (*nbr >= 9 && *nbr <= 13))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			is_positive *= -1;
		nbr++;
	}
	len = char_length(nbr, base_from);
	if (len == 0)
		return (nbr_to_base(0, base_to));
	len++;
	while (--len > 0)
		b10 += pwr(b_check(base_from), len - 1) * to_b10(&nbr[i++], base_from);
	return (nbr_to_base(is_positive * b10, base_to));
}
