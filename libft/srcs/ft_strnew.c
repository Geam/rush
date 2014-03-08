/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 15:56:19 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/27 10:09:37 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (char*)malloc(sizeof(char) * size + 1);
	if (temp)
	{
		while (i < size + 1)
		{
			temp[i] = '\0';
			i++;
		}
		return (temp);
	}
	return (NULL);
}
