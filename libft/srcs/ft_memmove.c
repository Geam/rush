/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:57:45 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/23 19:17:06 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*t_src;
	unsigned char	*t_dest;

	t_src = (unsigned char*)src;
	t_dest = (unsigned char*)dest;
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
	{
		while (n)
		{
			t_dest[n - 1] = t_src[n - 1];
			n--;
		}
	}
	return (dest);
}
