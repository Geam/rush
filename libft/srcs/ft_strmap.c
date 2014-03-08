/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 19:43:08 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/27 12:06:56 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			temp[i] = f(s[i]);
			i++;
		}
		return (temp);
	}
	return (NULL);
}
