/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:40:53 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 20:22:27 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	length;

	dest = NULL;
	if (s != NULL)
	{
		length = ft_strlen(s);
		dest = (char*)malloc(sizeof(*dest) * (length + 1));
		while (length + 1)
		{
			dest[length] = s[length];
			length--;
		}
	}
	return (dest);
}
