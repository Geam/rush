/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 15:55:41 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/09 17:39:11 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct_data.h"

int		ft_how_many_raw(t_data *data, int player, int coor[2], int dir[2], int len)
{
	if ((data->board)[coor[0]][coor[1]] = player)
	{
		if (len == 0)
			return (1);
		else if (coor[0] + dir[0] < data->x && coor[1] + dir[1] < data->y)
		{
			coor[0] += dir[0];
			coor[1] += dir[1];
			return (ft_how_many_raw(data, player, coor, dir, len - 1));
		}
		else
			return (0);
	}
}

void	ft_raw(t_data *data, int raw[2])
{
	/* compter le nombre de ligne de 3 pions de chaque joeur.*/
	/* joueur1 -> raw[0]; joueur2 -> raw[1] */
	int		player;
	int		coor[2];
	int		dir[2];

	player = 0;
	while (player < 2)
	{
		raw[player] = 0;
		coor[0] = 0;
		while (coor[0] < data->x)
		{
			coor[1] = 0;
			while (coor[1] < data->y)
			{
				dir[0] = 1;
				dir[1] = 0;
				raw[player] += ft_how_many_raw(data, player + 1, coor, dir, 0);
				dir[1] = 1;
				raw[player] += ft_how_many_raw(data, player + 1, coor, dir, 0);
				dir[0] = 0;
				raw[player] += ft_how_many_raw(data, player + 1, coor, dir, 0);
				(coor[1])++;
			}
			(coor[0])++;
		}
		player++;
	}
	return ;
}

int		ft_eval(t_data *data)
{
	/* determine le "poid" du plateau */
	int		raw[2];

	ft_raw(data, raw);
	return (raw[0] - raw[1]);
}
