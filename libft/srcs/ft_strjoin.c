/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:44:55 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 19:33:20 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_joining(char *temp, const char *s, int s_s, int start)
{
	int		i;

	i = 0;
	while (i < s_s)
	{
		temp[start + i] = s[i];
		i++;
	}
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	int		s_s1;
	int		s_s2;

	if (s1 != NULL && s2 != NULL)
	{
		s_s1 = ft_strlen(s1);
		s_s2 = ft_strlen(s2);
		temp = (char*)malloc(sizeof(char) * (s_s1 + s_s2 + 1));
		if (temp)
		{
			ft_joining(temp, s1, s_s1, 0);
			ft_joining(temp, s2, s_s2, s_s1);
			temp[s_s1 + s_s2] = '\0';
			return (temp);
		}
	}
	return (NULL);
}
