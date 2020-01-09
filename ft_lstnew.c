/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 18:52:56 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/18 16:03:16 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*head;

	head = (t_list*)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	if (!content)
	{
		head->content = NULL;
		head->content_size = 0;
		head->next = NULL;
		return (head);
	}
	else
	{
		if (!(head->content = malloc(content_size)))
			return (0);
		ft_memcpy(head->content, content, content_size);
		head->content_size = content_size;
		head->next = NULL;
		return (head);
	}
}
