/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 17:21:23 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/27 10:48:28 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strdel(char **as)
{
	int		i;

	i = 0;
	if (as != NULL)
	{
		while (as[i])
		{
			free(as[i]);
			i++;
		}
		free(as[i]);
		*as = NULL;
	}
	return ;
}
