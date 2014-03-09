/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 15:55:41 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/09 20:32:30 by frale-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

int		ft_how_many_raw(t_data *data, int player, int coor[2], int dir[2], int len)
{
	if ((data->board)[coor[0]][coor[1]] == player)
	{
		if (len - 1 == 0)
		{
//			printf("[%d][%d] ", coor[0], coor[1]);
			return (1);
		}
		if (coor[0] + dir[0] < data->x && coor[1] + dir[1] < data->y)
		{
			coor[0] += dir[0];
			coor[1] += dir[1];
			return (ft_how_many_raw(data, player, coor, dir, len - 1));
		}
		else
			return (0);
	}
	return (0);
}

int		ft_raw(t_data *data, int player, int len)
{
	/* compter le nombre de ligne de 3 pions de chaque joueur.*/
	int		coor[2];
	int		temp[2];
	int		dir[2];
	int		ret;

	ret = 0;
	coor[0] = 0;
	while (coor[0] < data->x)
	{
		coor[1] = 0;
		while (coor[1] < data->y)
		{
//			printf("\n[%d][%d] -> ", coor[0], coor[1]);
			dir[0] = 1;
			dir[1] = 0;
			temp[0] = coor[0];
			temp[1] = coor[1];
			ret += ft_how_many_raw(data, player + 1, temp, dir, len);
			dir[1] = 1;
			temp[0] = coor[0];
			temp[1] = coor[1];
			ret += ft_how_many_raw(data, player + 1, temp, dir, len);
			dir[0] = 0;
			temp[0] = coor[0];
			temp[1] = coor[1];
			ret += ft_how_many_raw(data, player + 1, temp, dir, len);
			dir[0] = 1;
			dir[1] = -1;
			temp[0] = coor[0];
			temp[1] = coor[1];
			ret += ft_how_many_raw(data, player + 1, temp, dir, len);
			(coor[1])++;
		}
		(coor[0])++;
	}
	return (ret);
}

int		ft_eval(t_data *data)
{
	/* determine le "poid" du plateau */
	int		player;
	int		raw[2];

	player = 0;
	while (player < 2)
	{
		raw[player] = ft_raw(data, player, 2);
		player++;
	}
	return (raw[0] - raw[1]);
}
