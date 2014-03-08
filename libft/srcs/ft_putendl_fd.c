/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/24 19:05:52 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 20:11:20 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putendl_fd(char const *s, int fd)
{
	size_t	len;

	len = -1;
	if (s != NULL)
	{
		len = ft_putstr_fd(s, fd);
		len += ft_putchar_fd('\n', fd);
	}
	return (len);
}
