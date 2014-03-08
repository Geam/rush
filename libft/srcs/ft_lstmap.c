/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 14:51:34 by mdelage           #+#    #+#             */
/*   Updated: 2013/12/01 14:35:34 by mdelage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elemt))
{
	t_list	*temp;
	t_list	*temp_old;
	t_list	*ret;
	t_list	*save;

	temp_old = NULL;
	save = NULL;
	while (lst != NULL && f != NULL)
	{
		ret = f(lst);
		temp = ft_lstnew(ret->content, ret->content_size);
		if (temp == NULL)
			return (NULL);
		temp->next = NULL;
		if (temp_old != NULL)
			temp_old->next = temp;
		temp_old = temp;
		lst = lst->next;
		if (save == NULL)
			save = temp;
	}
	return (save);
}
