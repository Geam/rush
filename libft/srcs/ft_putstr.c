/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 10:25:50 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 20:10:33 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_putstr(char const *s)
{
	size_t		len;

	len = 0;
	if (s != NULL)
		len = write(1, s, ft_strlen(s));
	return (len);
}
