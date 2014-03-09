/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frale-co <frale-co@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 16:07:44 by frale-co          #+#    #+#             */
/*   Updated: 2014/03/09 19:19:13 by frale-co         ###   ########.fr       */
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

char		**ft_init_board(t_data *data, char **av);
void		ft_aff(const t_data *data);
void		ft_start(t_data *data);
void		ft_player(t_data *data);
int			ft_eval(t_data *data);
int			ft_raw(t_data *data, int player, int len);
void		ft_ia(t_data *data);
int			ft_winner(t_data *data, int player);

#endif /* !PUISSANCE4_H */
