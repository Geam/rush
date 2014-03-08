/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minmax.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:44:50 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/08 20:10:20 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct_data.h"

int		ft_max(t_data *data, int deep)
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
		tmp = ft_min(data, deep + 1);
		if (tmp > max)
			max = tmp;
	}
	return (max);
}

int		ft_min(t_data *data, int deep)
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
		tmp = ft_min(data, deep + 1);
		if (tmp > min)
			min = tmp;
	}
	return (min);
}

void	ft_raw(t_data *data, int raw[2])
{
	/* compter le nombre de ligne de 2 ou 3 pions de chaque joeur.*/
	/* joueur1 -> raw[0]; joueur2 -> raw[1] */
	raw[0] = 0;
	raw[1] = 0;
	return ;
}

int		ft_eval(t_data *data)
{
	/* determine le "poid" du plateau */
	int		piece;
	int		raw[2];

	piece = ft_how_many_piece(); /* retourne nb piece sur plateau */
	if (/* partie finie */)
	{
		if (/* IA gagne */)
			return (1000 - piece);
		else
			return (-1000 + piece);
	}
	else
	{
		ft_raw(data, raw);
		return (raw[0] - raw[1]);
	}
}

int		ft_winner(t_data *data)
{
	/* evalue l'etat du plateau de jeu */
	/* 0 = jeu non fini */
	/* 1 = joueur 1 gagne */
	/* 2 = joueur 2 gagne */
	/* 3 = match nul */
	if (/* joueur 1 a 4 pion alignes */)
		return (1);
	else if (/* joueur 2 a 4 pion alignes */)
		return (2);
	else
	{
		if (/* partie finie */)
			return (3);
		else
			return (0);
	}
}

void	ft_IA(t_data *data)
{
	/* joue le meilleur coup pour l'IA */
	int		max;
	int		tmp;
	int		where[2];
	char	**fake_board;

	max = -10000;
	fake_board = ft_/* fonction de duplication du plateau */
	while (/* cases a joueur */)
	{
		/* MAJ faux plateau */
		tmp = ft_min(data, 1);
		if (tmp > max)
			/* On doit recuperer la position, pas encore compris comment...*/
	}
	/* MAJ du vrai plateau avec la position recuperee */
}
