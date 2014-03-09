/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_data.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 13:22:52 by geam              #+#    #+#             */
/*   Updated: 2014/03/09 15:35:50 by frale-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCT_DATA_H
# define FT_STRUCT_DATA_H

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

#endif /* FT_STRUCT_DATA_H */
