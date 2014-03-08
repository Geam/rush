/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 23:00:52 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/08 23:09:41 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_dup_tab(char **tab)
{
	int		i;
	char	**new;

	i = 0;
	while (tab[i])
		i++;
	new = (char **)malloc(sizeof(char *) * (i + 1));
	if (new)
	{
		i = 0;
		while (tab[i])
		{
			new[i] = ft_strdup(tab[i]);
			i++;
		}
		new[i] = NULL;
	}
	return (new);
}
