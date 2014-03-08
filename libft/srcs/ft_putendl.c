/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 10:25:15 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 20:07:46 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putendl(char const *s)
{
	size_t	len;

	len = 0;
	if (s != NULL)
	{
		len = ft_putstr(s);
		len += ft_putchar('\n');
	}
	return (len);
}
