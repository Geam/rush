/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:15:37 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 20:27:11 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src != NULL && dest != NULL)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		if (i != n)
			dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
