/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 12:42:23 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/26 14:18:03 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char*)malloc(sizeof(*temp) * size);
	while (i < size)
	{
		temp[i] = '\0';
		i++;
	}
	return (temp);
}
