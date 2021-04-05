#include "ft.h"

int		main(int argc, char **argv)
{
	int				fd;
	char			buf[16];
	int				offset;
	//int				buff_i;
	//int				r;
	//int				l;

	/*if ((fd = open(argv[1], O_RDONLY) == -1))
	{
		printf("[tmp] erreur open(argv[1]);");
		return (0);
	}*/
	offset = 0;
	//if (r == 0)
	//	return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &buf, 1) != 0)
	{
		if ((int)buf[0] <= 16)
			ft_putchar('0');
		ft_putchar_hex((int)buf[0], "0123456789abcdef");
		ft_putchar(' ');
		//write(1, &buf, 1);
	}
	(void)argc;
	return (0);
}