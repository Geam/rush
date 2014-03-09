/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_winner.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 15:56:23 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/09 17:38:32 by mdelage          ###   ########.fr       */
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

int		ft_winner(t_data *data)
{
	/* evalue l'etat du plateau de jeu */
	/* 0 = jeu non fini */
	/* 1 = joueur 1 gagne */
	/* 2 = joueur 2 gagne */
	/* 3 = match nul */
	int		nb_piece;

	nb_piece = ft_how_many_piece(data);
	if ()
		return (1);
	else if ()
		return (2);
	else
	{
		if ()
			return (3);
		else
			return (0);
	}
}
