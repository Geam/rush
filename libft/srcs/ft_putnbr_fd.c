/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:00:16 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/08 23:15:45 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_putnbr_fd(long n, int fd)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
		len += ft_putnbr_fd(n / 10, fd);
	return (ft_putchar_fd(n % 10 + '0', fd));
}
