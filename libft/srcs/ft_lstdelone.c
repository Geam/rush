/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 10:58:21 by mdelage           #+#    #+#             */
/*   Updated: 2013/11/30 18:09:21 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;

	temp = *alst;
	if (*alst != NULL && del != NULL)
	{
		del(temp->content, temp->content_size);
		free(temp);
		*alst = NULL;
	}
	return ;
}
