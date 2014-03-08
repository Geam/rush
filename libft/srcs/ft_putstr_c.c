/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 09:54:32 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 20:12:22 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstr_c(char *s, char *color)
{
	size_t	len;

	len = 0;
	if (s != NULL)
	{
		ft_putstr(color);
		len = ft_putstr(s);
		ft_putstr(NORMAL);
	}
	return (len);
}
