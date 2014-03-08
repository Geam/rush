/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 10:26:02 by mdelage           #+#    #+#             */
/*   Updated: 2014/03/05 20:14:27 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_putnbr(long n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
		len += ft_putnbr(n / 10);
	return (ft_putchar(n % 10 + '0'));
}
