/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 14:10:01 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/30 18:11:52 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;
	t_list	*temp_old;

	temp_old = *alst;
	while (temp_old != NULL)
	{
		temp = temp_old->next;
		del(temp_old->content, temp_old->content_size);
		free(temp_old);
		temp_old = temp;
	}
	*alst = NULL;
	return ;
}
