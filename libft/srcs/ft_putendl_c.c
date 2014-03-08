/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 09:54:19 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 20:07:14 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putendl_c(char *s, char *color)
{
	size_t	len;

	len = 0;
	if (s != NULL)
	{
		len = ft_putstr_c(s, color);
		len += ft_putchar('\n');
	}
	return (len);
}
