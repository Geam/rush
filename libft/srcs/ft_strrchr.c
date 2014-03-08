/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:02:53 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 20:28:16 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			if (s[i] == c)
				result = i + 1;
			i++;
		}
		if (result)
			return (&((char*)s)[result - 1]);
		else if (s[i] == c)
			return (&((char*)s)[i]);
	}
	return (NULL);
}
