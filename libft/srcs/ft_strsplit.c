/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:30:23 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 19:34:17 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**ft_nb_word(char const *s, char c, char **tab)
{
	int		i;
	int		nb_word;

	i = 1;
	nb_word = (s[0] != c && s[0] != '\0') ? 1 : 0 ;
	if (s[0] != '\0')
	{
		while (s[i])
		{
			if (s[i] != c && s[i - 1] == c)
				nb_word++;
			i++;
		}
	}
	tab = (char **)malloc(sizeof(char *) * (nb_word + 1));
	return (tab);
}

static char	**ft_word_size(char const *s, char c, char **tab, int word)
{
	int		i;
	int		word_size;

	i = 0;
	word_size = (s[0] != c && s[0] != '\0') ? 1 : 0;
	while ((++i) && s[i])
	{
		if (s[i] != c)
			word_size++;
		else if (s[i] == c && s[i - 1] != c)
		{
			tab[word] = (char *)malloc(sizeof(char) * (word_size + 1));
			word++;
			word_size = 0;
		}
	}
	if (s[i] == '\0' && s[i - 1] != c)
	{
		tab[word] = (char *)malloc(sizeof(char) * (word_size + 1));
		word++;
		word_size = 0;
	}
	tab[word] = (char *)malloc(sizeof(char) * (word_size + 1));
	return (tab);
}

/*
** index[0] = i; index[1] = j; index[2] = word;
*/

static char	**ft_fill_word(char const *s, char c, char **tab, int *index)
{
	index[0] = 0;
	index[1] = (s[0] && s[0] != c) ? 1 : 0;
	tab[index[2]][0] = (s[0] != c) ? s[0] : '\0';
	while ((++index[0]) && s[index[0]])
	{
		if (s[index[0]] != c)
		{
			tab[index[2]][index[1]] = s[index[0]];
			index[1]++;
		}
		else if (s[index[0]] == c && s[index[0] - 1] != c)
		{
			tab[index[2]][index[1]] = '\0';
			index[2]++;
			index[1] = 0;
		}
	}
	if (s[index[0]] == '\0' && s[index[0] - 1] != c)
	{
		tab[index[2]][index[1]] = '\0';
		index[2]++;
		index[1] = 0;
	}
	tab[index[2]][index[1]] = '\0';
	return (tab);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		index[3];

	if (s != NULL)
	{
		tab = NULL;
		index[0] = 0;
		index[1] = 0;
		index[2] = 0;
		tab = ft_nb_word(s, c, tab);
		if (tab != NULL)
		{
			tab = ft_word_size(s, c, tab, 0);
			tab = ft_fill_word(s, c, tab, index);
		}
		return (tab);
	}
	return (NULL);
}
