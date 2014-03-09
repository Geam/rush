/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frale-co <frale-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 16:07:44 by frale-co          #+#    #+#             */
/*   Updated: 2014/03/09 16:54:16 by frale-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE4_H
# define PUISSANCE4_H

# include <time.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "libft.h"
#include <stdio.h>

typedef struct	s_data
{
	char	**board;
	int		width;
	int		height;
	int		x;
	int		y;
	int		depp;
	int		last[2];
}				t_data;

char		**ft_init_board(t_data *data, char **av);
void		ft_aff(const t_data *data);
void		ft_start(t_data *data);
void		ft_player(t_data *data);

#endif
