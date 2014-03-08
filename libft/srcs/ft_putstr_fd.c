/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/24 19:06:01 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 20:17:42 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_putstr_fd(char const *s, int fd)
{
	size_t	len;

	len = 0;
	if (s != NULL)
		len = write(fd, s, ft_strlen(s));
	return (len);
}
