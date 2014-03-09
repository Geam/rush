/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 15:55:41 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/09 15:57:09 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct_data.h"

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
