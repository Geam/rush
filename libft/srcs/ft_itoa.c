/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 12:36:58 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/28 18:42:56 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_n_size(long n, int size)
{
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	if (n >= 10)
		size = ft_n_size(n / 10, size);
	return (size + 1);
}

static int	ft_fill_nbr(long n, char *text, int i)
{
	if (n < 0)
	{
		text[i] = '-';
		i++;
		n *= -1;
	}
	if (n >= 10)
		i = ft_fill_nbr(n / 10, text, i);
	text[i] = n % 10 + '0';
	return (i + 1);
}

char		*ft_itoa(int n)
{
	int		size;
	char	*text;
	int		ret;

	size = ft_n_size((long)n, 1);
	text = (char *)malloc(sizeof(char) * (size + 1));
	if (text)
	{
		ret = ft_fill_nbr((long)n, text, 0);
		text[ret] = '\0';
		return (text);
	}
	return (NULL);
}
