/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:39:12 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/23 19:59:38 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*t_s1;
	unsigned char	*t_s2;

	i = 0;
	t_s1 = (unsigned char*)s1;
	t_s2 = (unsigned char*)s2;
	while (i < n)
	{
		if (t_s1[i] != t_s2[i])
		return (t_s1[i] - t_s2[i]);
		i++;
	}
	return (0);
}
