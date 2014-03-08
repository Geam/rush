/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 19:50:10 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/27 12:07:52 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	size_t	i;
	size_t	length;
	char	*temp;

	if (s != NULL && f != NULL)
	{
		i = 0;
		length = ft_strlen(s);
		temp = (char*)malloc(sizeof(char) * length);
		while (i < length)
		{
			temp[i] = f(i, s[i]);
			i++;
		}
		return (temp);
	}
	return (NULL);
}
