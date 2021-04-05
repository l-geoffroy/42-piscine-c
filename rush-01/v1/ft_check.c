#include "puzzle.h"

int	ft_check(t_game game)
{
	int i;

	i = -1;
	while (++i < 4)
	{
		if (ft_doublon_line(game, i))
			return (0);
		if (ft_doublon_col(game, i))
			return (0);
	}
	return (ft_check_views(game));
}

int	ft_doublon_line(t_game game, int line)
{
	int i;
	int j;

	i = -1;
	while (++i < 4)
	{
		j = i;
		while (++j < 4)
			if (game.board[line][i] == game.board[line][j])
				return (1);
	}
	return (0);
}

int	ft_doublon_col(t_game game, int col)
{
	int i;
	int j;

	i = -1;
	while (++i < 4)
	{
		j = i;
		while (++j < 4)
			if (game.board[i][col] == game.board[j][col])
				return (1);
	}
	return (0);
}