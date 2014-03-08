/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:03:13 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 20:27:54 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		if (*s2 == '\0')
			return ((char *)s1);
		while (s1[i] && i < n)
		{
			j = 0;
			while (s1[i + j] == s2[j] && s1[i + j] && s2[j] && (i + j) < n)
			{
				if (s2[j + 1] == '\0')
					return (&((char*)s1)[i]);
				j++;
			}
			i++;
		}
	}
	return (NULL);
}
