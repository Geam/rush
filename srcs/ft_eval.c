/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 15:55:41 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/09 23:32:13 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

int				ft_how_many_raw(t_data *data, int coor[2], t_row *row, int len)
{
	if ((data->board)[coor[0]][coor[1]] == row->player + 1)
	{
		if (len - 1 == 0)
		{
			return (1);
		}
		if (coor[0] + row->dir[0] < data->x && coor[1] + row->dir[1] < data->y)
		{
			coor[0] += row->dir[0];
			coor[1] += row->dir[1];
			return (ft_how_many_raw(data, coor, row, len - 1));
		}
		else
			return (0);
	}
	return (0);
}

static t_row	*row_init(int player, int len)
{
	t_row	*row;

	row = (t_row *)malloc(sizeof(t_row));
	if (row)
	{
		row->len = len;
		row->player = player;
		row->coor[0] = 0;
		row->coor[1] = 0;
		row->dir[0] = 1;
		row->dir[1] = 0;
	}
	return (row);
}

static int		ft_vect(t_data *data, t_row *row)
{
	int		temp[2];
	int		ret;

	ret = 0;
	row->dir[0] = 1;
	row->dir[1] = 0;
	temp[0] = row->coor[0];
	temp[1] = row->coor[1];
	ret += ft_how_many_raw(data, temp, row, row->len);
	row->dir[1] = 1;
	temp[0] = row->coor[0];
	temp[1] = row->coor[1];
	ret += ft_how_many_raw(data, temp, row, row->len);
	row->dir[0] = 0;
	temp[0] = row->coor[0];
	temp[1] = row->coor[1];
	ret += ft_how_many_raw(data, temp, row, row->len);
	row->dir[1] = -1;
	row->dir[0] = 1;
	temp[0] = row->coor[0];
	temp[1] = row->coor[1];
	ret += ft_how_many_raw(data, temp, row, row->len);
	return (ret);
}

int				ft_raw(t_data *data, int player, int len)
{
	t_row	*row;
	int		ret;

	ret = 0;
	row = row_init(player, len);
	while (row->coor[0] < data->x)
	{
		row->coor[1] = 0;
		while (row->coor[1] < data->y)
		{
			ret += ft_vect(data, row);
			(row->coor[1])++;
		}
		(row->coor[0])++;
	}
	free(row);
	return (ret);
}

int				ft_eval(t_data *data)
{
	int		player;
	int		raw[2];

	player = 0;
	while (player < 2)
	{
		raw[player] = ft_raw(data, player, 2);
		raw[player] += 2 * ft_raw(data, player, 3);
		raw[player] += 10 * ft_raw(data, player, 4);
		player++;
	}
	return (raw[1] - (raw[0] * 2));
}
