/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 20:14:47 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/09 15:42:10 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_struct_data.h"

int		ft_depth(char *board_col)
{
	int		i;

	i = 0;
	while (board_col[i] == 0)
		i++;
	return (i - 1);
}

int		ft_max(t_data *data, int deep)
{
	/* test les coups pour l'IA */
	int		i;
	int		ret;
	int		max;
	int		tmp;

	max = -10000;
	if (deep == data->deep)
		return (ft_eval());
	i = 0;
	while (i < data->x)
	{
		if ((ret = ft_depth((data->board)[i])) >= 0)
		{
			(data->board)[i][ret] = 2;
			tmp = ft_min(data, deep + 1);
			if (tmp > max)
				max = tmp;
			(data->board)[i][ret] = 0;
		}
		i++;
	}
	return (max);
}

int		ft_min(t_data *data, int deep)
{
	/* test les coups pour le joueur */
	int		i;
	int		ret;
	int		min;
	int		tmp;

	min = -10000;
	if (deep == data->deep)
		return (ft_eval());
	i = 0;
	while (i < data->x)
	{
		if ((ret = ft_depth((data->board)[i])) >= 0)
		{
			(data->board)[i][ret] = 1;
			tmp = ft_max(data, deep + 1);
			if (tmp > min)
				min = tmp;
			(data->board)[i][ret] = 0;
		}
		i++;
	}
	return (min);
}

void	ft_IA(t_data *data)
{
	/* joue le meilleur coup pour l'IA */
	int		max;
	int		tmp;
	int		i;
	int		ret;

	max = -10000;
	i = 0;
	while (i < data->x)
	{
		if ((ret = ft_depth(fake[i])) >= 0)
		{
			(data->board)[i][ret] = 2;
			tmp = ft_min(data, fake, 1);
			if (tmp > max)
			{
				(data->last)[0] = i;
				(data->last)[1] = ret;
			}
			(data->board)[i][ret] = 0;
		}
		i++;
	}
	(data->board)[(data->last)[0]][(data->last)[1]] = 2;
	return ;
}
