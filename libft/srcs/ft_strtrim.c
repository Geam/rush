/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:56:33 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/27 14:23:45 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_strlen_without_whitespace(char const *s)
{
	int		i;
	int		size;
	int		mark;

	i = 0;
	size = 0;
	mark = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
		i++;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			mark++;
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			mark = 0;
		size++;
		i++;
	}
	return (size - mark);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		size;
	char	*temp;

	if (s != NULL)
	{
		i = 0;
		j = 0;
		size = ft_strlen_without_whitespace(s);
		temp = (char*)malloc (sizeof(char) * (size + 1));
		if (temp)
		{
			while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
				i++;
			while (j < size)
			{
				temp[j] = s[i + j];
				j++;
			}
			temp[j] = '\0';
			return (temp);
		}
	}
	return (NULL);
}
