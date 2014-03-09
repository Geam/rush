/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 12:07:31 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/09 21:25:06 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

static int	ft_init_board_sub(char **board, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < x)
	{
		board[i] = (char *)malloc(sizeof(char) * (y + 1));
		if (board[i])
		{
			j = 0;
			while (j < y)
			{
				board[i][j] = 0;
				j++;
			}
			board[i][j] = -1;
		}
		else
			return (i);
		i++;
	}
	board[i] = NULL;
	return (0);
}

char		**ft_init_board(t_data *data, char **av)
{
	int		x;
	int		ret;
	char	**board;

	board = NULL;
	data->x = ft_atoi(av[1]);
	data->y = ft_atoi(av[2]);
	if (data->x >= 7 && data->y >= 6)
	{
		board = (char **)malloc(sizeof(char *) * (data->x + 1));
		if (board)
		{
			if ((ret = ft_init_board_sub(board, data->x, data->y)))
			{
				x = -1;
				while (++x < ret)
					free(board[x]);
				free(board);
				board = NULL;
			}
		}
	}
	return (board);
}
