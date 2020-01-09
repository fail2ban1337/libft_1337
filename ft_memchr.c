/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:40:52 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/10 12:39:23 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *temp;

	temp = (void *)s;
	while (n--)
	{
		if ((char)*temp == (char)c)
			return ((void *)temp);
		temp++;
	}
	return (0);
}
