/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 11:04:36 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/08 12:08:31 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_init_board.h"

int		main(int ac, char **av)
{
	char	**board;

	if (ac != 3)
		ft_putendl_fd("Error : missing board game size.\n./puissance4 x y", 2);
	else
	{
		game = ft_init_game_board(av);
		if (game != NULL)
		{
		}
		else
			ft_putendl_fd("Error : wrong board game size.", 2);
	}
	return (0);
}
