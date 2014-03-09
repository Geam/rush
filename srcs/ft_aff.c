/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 21:33:29 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/09 21:33:31 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

void	ft_putfree(void)
{
	ft_putstr("\033[1;36m");
	ft_putstr("⬚");
	ft_putstr("\033[00m");
}

void	ft_putplayer(void)
{
	ft_putstr("\033[32;33m");
	ft_putstr("◉");
	ft_putstr("\033[00m");
}

void	ft_putia(void)
{
	ft_putstr("\033[1;31m");
	ft_putstr("◉");
	ft_putstr("\033[00m");
}

void	ft_aff(const t_data *data)
{
	int		i;
	int		j;

	j = 0;
	ft_putchar('\n');
	while (j < data->y)
	{
		i = 0;
		while (i < data->x)
		{
			if (data->board[i][j] == 0)
				ft_putfree();
			if (data->board[i][j] == 1)
				ft_putplayer();
			if (data->board[i][j] == 2)
				ft_putia();
			ft_putchar(' ');
			i++;
		}
		j++;
		ft_putchar('\n');
	}
	ft_putchar('\n');
}
