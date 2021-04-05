
#ifndef FT_SKYSCRAPERS_H
# define FT_SKYSCRAPERS_H
# include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);

int		ft_init_grid(int *views);
int		ft_backtrack(int grid[4][4], int *input);
void	ft_display_grid(int grid[4][4]);
int		ft_check_grid(int grid[4][4], int *in_num);

#endif
