/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:16:12 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 19:36:27 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	t_c;
	unsigned char	*t_dest;
	unsigned char	*t_src;

	i = 0;
	t_dest = (unsigned char *)dest;
	t_src = (unsigned char *)src;
	t_c = c;
	while (i < n)
	{
		t_dest[i] = t_src[i];
		if (t_src[i] == t_c)
			return (&t_dest[i + 1]);
		i++;
	}
	return (NULL);
}
