/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 11:04:36 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/08 13:30:07 by geam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_struct_data.h"
#include "ft_init_board.h"

int		main(int ac, char **av)
{
	t_data	data;

	if (ac != 3)
		ft_putendl_fd("Error : missing board game size.\n./puissance4 x y", 2);
	else
	{
		data.board = ft_init_board(&data, av);
		if (data.board != NULL)
		{
			free(data.board);
		}
		else
			ft_putendl_fd("Error : wrong board game size.", 2);
	}
	return (0);
}
