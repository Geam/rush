/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frale-co <frale-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 14:41:55 by frale-co          #+#    #+#             */
/*   Updated: 2014/03/09 18:18:47 by frale-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

static void	ft_playerturn(t_data *data)
{
	int		ret;

	ret = 0;
	while (ret == 0)
	{
		ft_player(data);
		if ((ret = ft_winner(data, 1)) == 1)
		{
			ft_putendl("You WIN !");
			return ;
		}
		ft_ia(data);
		if ((ret = ft_winner(data, 2)) == 1)
		{
			ft_putendl("You lose !");
			return ;
		}
	}
	ft_putendl("Draw !");
}

void		ft_start(t_data *data)
{
	int		play;

	srand(time(NULL));
	ft_putstr("\033[1;31m");
	ft_putendl("Computer : ◉");
	ft_putstr("\033[1;33m");
	ft_putendl("Player : ◉");
	ft_putstr("\033[1;36m");
	ft_putendl("Empty : ⬚");
	ft_putstr("\033[00m");
	ft_aff(data);
	if (((rand()) % 2) == 0)
	{
		ft_putendl("Computer start.");
		play = (data->x / 2);
		data->board[play][data->y - 1] = 2;
		ft_aff(data);
	}
	else
		ft_putendl("You start.");
	ft_playerturn(data);
}
