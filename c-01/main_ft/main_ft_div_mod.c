int		main(int argc, char *argv[])
{
	int 	a;
	int		b;
	int		result_div;
	int		result_mod;
	int		*ptr_div;
	int		*ptr_mod;

	a = 26;
	b = 5;
	ptr_div = &result_div;
	ptr_mod = &result_mod;
	ft_div_mod(a, b, ptr_div, ptr_mod);
	printf("Div: %i  -  Mod: %i\n", *ptr_div, *ptr_mod);
	return (0);

