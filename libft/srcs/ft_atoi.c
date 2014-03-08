/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 19:02:43 by mdelage           #+#    #+#             */
/*   Updated: 2013/12/02 18:24:00 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_atoi(char *str)
{
	int		i;
	int		result;
	int		symbol;

	i = 0;
	result = 0;
	symbol = 1;
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) && str[i] != '\0')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		symbol = (str[i] == '-') ? -1 : 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * symbol);
}
