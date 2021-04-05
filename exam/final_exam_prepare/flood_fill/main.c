#include "test_functions.h"
#include "t_point.h"
#include <stdio.h>

int main(void)
{
	char **area;
	t_point size = { 8, 5 };
	t_point begin = { 2, 3 };
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001"
	};

	//area = make_area(zone);
	print_tab(zone, &size);
	//flood_fill(area, size, begin);
	ft_putc('\n');
	//print_tab(area);
	return (0);
}