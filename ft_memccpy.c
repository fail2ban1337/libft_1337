/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:47:13 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/16 17:43:01 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*ptr1;
	const char		*ptr2;
	size_t			i;
	unsigned char	f;

	f = c;
	ptr1 = dst;
	ptr2 = src;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)ptr2[i] == f)
		{
			*ptr1 = ptr2[i];
			ptr1++;
			return (ptr1);
		}
		*ptr1 = ptr2[i];
		i++;
		ptr1++;
	}
	return (0);
}
