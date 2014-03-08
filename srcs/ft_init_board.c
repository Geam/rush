/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 12:07:31 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/08 12:25:04 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char		**ft_init_board(char **av)
{
	int		x;
	int		y;
	int		ret;
	char	**board;

	board = NULL;
	x = ft_atoi(av[1]);
	y = ft_atoi(av[2]);
	if (x >= 7 && y >= 6)
	{
		board = (char **)malloc(sizeof(char *) * (x + 1));
		if (board)
		{
			if ((ret = ft_init_board_sub(board, x, y)))
			{
				x = 0;
				while (x < i)
				{
					free(board[x]);
					x++;
				}
				free(board);
				board = NULL;
			}
		}
	}
	return (board);
}
