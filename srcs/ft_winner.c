/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_winner.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 15:56:23 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/09 18:02:24 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct_data.h"

int		ft_how_many_piece(t_data *data)
{
	int		i;
	int		j;
	int		nb_piece;

	i = 0;
	nb_piece = 0;
	while (i < data->x)
	{
		j = 0;
		while (j < data->y)
		{
			if ((data->board)[i][j])
				nb_piece++;
		}
	}
	return (nb_piece);
}

/* evalue l'etat du plateau de jeu */
/* 0 = jeu non fini */
/* 1 = joueur checke gagne */
/* 2 = match nul */

int		ft_winner(t_data *data, int player)
{
	int		nb_piece;
	int		ret;

	nb_piece = ft_how_many_piece(data);
	ret = ft_raw(data, player - 1, 4);
	if (ret)
		return (1);
	else
	{
		if (nb_piece == data->x * data->y)
			return (2);
		else
			return (0);
	}
}
