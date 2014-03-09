/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 21:33:56 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/09 21:33:57 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

static int	ft_put_pplay(t_data *data, int play)
{
	int		i;

	i = 0;
	while (data->board[play][i] == 0)
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
	char	buf[10];
	int		play;

	play = -1;
	ft_putstr("Which column? ");
	if (read(0, &buf, 10) < 0)
	{
		ft_player(data);
		return ;
	}
	play = ft_atoi(buf);
	if (play > data->x || play <= 0)
	{
		ft_player(data);
		return ;
	}
	if (!ft_put_pplay(data, play - 1))
	{
		ft_player(data);
		return ;
	}
	ft_aff(data);
}
