/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 20:14:47 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/09 01:16:38 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_struct_data.h"

int		ft_max(t_data *data, char **fake, int deep)
{
	/* test les coups pour l'IA */
	int		max;
	int		tmp;

	max = -10000;
	if (deep == data->deep)
		return (ft_eval());
	while (/* cases a jouer */)
	{
		/* MAJ faux plateau avec nouveau coup */
		tmp = ft_min(data, fake, deep + 1);
		if (tmp > max)
			max = tmp;
	}
	return (max);
}

int		ft_min(t_data *data, char **fake, int deep)
{
	/* test les coups pour le joueur */
	int		min;
	int		tmp;

	min = -10000;
	if (deep == data->deep)
		return (ft_eval());
	while (/* cases a jouer */)
	{
		/* MAJ faux plateau avec nouveau coup */
		tmp = ft_min(data, fake, deep + 1);
		if (tmp > min)
			min = tmp;
	}
	return (min);
}

void	ft_IA(t_data *data)
{
	/* joue le meilleur coup pour l'IA */
	int		max;
	int		tmp;
	int		where[2];
	char	**fake_board;

	max = -10000;
	fake_board = ft_dup_tab(data->board);
	while (/* cases a joueur */)
	{
		/* MAJ faux plateau */
		tmp = ft_min(data, fake, 1);
		if (tmp > max)
			/* On doit recuperer la position, pas encore compris comment...*/
	}
	/* MAJ du vrai plateau avec la position recuperee */
	ft_free_tab(&fake_board);
}
