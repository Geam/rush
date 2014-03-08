/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 21:29:42 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/27 12:19:08 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	i;

	if (s != NULL)
	{
		i = 0;
		temp = (char*)malloc(sizeof(char) * (len + 1));
		if (temp)
		{
			while (i < len)
			{
				temp[i] = s[start + i];
				i++;
			}
			return (temp);
		}
	}
	return (NULL);
}
