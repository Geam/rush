/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 14:27:52 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 20:28:45 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		if (*s2 == '\0')
			return ((char*)s1);
		while (s1[i])
		{
			j = 0;
			while (s1[i + j] == s2[j] && s1[i + j] & s2[j])
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
