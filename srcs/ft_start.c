/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frale-co <frale-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 14:41:55 by frale-co          #+#    #+#             */
/*   Updated: 2014/03/09 16:04:59 by frale-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "al_cu.h"
#include "ft_struct_data.h"

void	ft_start(t_data *data)
{
	int		play;

	ft_putendl("Ordinateur : X");
	ft_putendl("Player : O");
	ft_putendl("Empty : .");
	ft_aff(tab);
	if (((rand()) % 2) == 0)
	{
		ft_putendl("L'ordinateur commence.");
		play = (data->x / 2) + 1;
		tab[play][data->y - 1] = 2;
		ft_aff(data);
	}
	else
		ft_putendl("You start.");
	ft_player(data);
}
