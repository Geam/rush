/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 21:33:16 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/09 21:33:17 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE4_H
# define PUISSANCE4_H

# define DEEP	4

# include <time.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "libft.h"

typedef struct	s_data
{
	char	**board;
	int		width;
	int		height;
	int		x;
	int		y;
	int		last[2];
}				t_data;

typedef struct	s_row
{
	int		len;
	int		player;
	int		coor[2];
	int		dir[2];
}				t_row;

char		**ft_init_board(t_data *data, char **av);
void		ft_aff(const t_data *data);
void		ft_start(t_data *data);
void		ft_player(t_data *data);
int			ft_eval(t_data *data);
int			ft_raw(t_data *data, int player, int len);
void		ft_ia(t_data *data);
int			ft_winner(t_data *data, int player);

#endif /* !PUISSANCE4_H */
