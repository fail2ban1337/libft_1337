/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 16:16:07 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/18 16:09:27 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*d;

	temp = f(lst);
	d = temp;
	if (lst)
	{
		while (lst->next)
		{
			lst = lst->next;
			temp->next = f(lst);
			temp = temp->next;
		}
		return (d);
	}
	return (NULL);
}
