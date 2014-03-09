/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frale-co <frale-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 19:03:05 by frale-co          #+#    #+#             */
/*   Updated: 2014/03/09 16:05:10 by frale-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "al_cu.h"
#include "ft_struct_data.h"

static int	ft_put_pplay(t_data *data, int play)
{
	int		i;

	i = 0;
	while (data->board[play][i] == '.')
		i++;
	i--;
	if (i >= 0)
	{
		data->board[play][i] = 1;
		return (1);
	}
	else 
		return (0);
}

void		ft_player(t_data *data)
{
	char	buf;
	int		play;

	ft_putstr("Wich column? ");
	if (read(0, &buf, 10) < 0)
	{
		ft_player(data);
		return ;
	}
	play = ft_atoi(&buf);
	if (play > data->x || play <= 0)
	{
		ft_player(data);
		return ;
	}
	if (!ft_put_pplay(data, play))
	{
		ft_player(data);
		return ;
	}
	ft_aff(data);
/* Apel de l'IA */
}
