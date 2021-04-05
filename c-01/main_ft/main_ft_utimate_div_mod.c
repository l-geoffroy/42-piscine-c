int		main(void)
{
	int		a;
	int		b;
	int 	*ptr_a;
	int		*ptr_b;

	a = 15;
	b = 5;
	ptr_a = &a;
	ptr_b = &b;
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("Div: %i - Mod: %i\n", *ptr_a, *ptr_b);
	return (0);
}
