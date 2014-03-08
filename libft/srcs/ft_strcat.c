/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:17:32 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 20:20:00 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (src != NULL && dest != NULL)
	{
		while (dest[i] != '\0')
			i++;
		while (src[j] != '\0')
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = src[j];
		return (dest);
	}
	return (NULL);
}
