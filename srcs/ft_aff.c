/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frale-co <frale-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 15:41:10 by frale-co          #+#    #+#             */
/*   Updated: 2014/03/09 13:24:41 by frale-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "al_cu.h"
#include "ft_struct_data.h"

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
				ft_putchar('.');
			if (data->board[i][j] == 1)
				ft_putchar('O');
			if (data->board[i][j] == 2)
				ft_putchar('X');
			i++;
		}
		y++;
		ft_putchar('\n');
	}
	ft_putchar('\n');
}
