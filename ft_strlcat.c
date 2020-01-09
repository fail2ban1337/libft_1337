/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 10:55:45 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/18 16:00:50 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	sr;
	size_t	ret;

	sr = ft_strlen(dst);
	len = 0;
	while (dst[len] && size)
	{
		len++;
		size--;
	}
	ret = len + ft_strlen(src);
	if (size)
	{
		while (*src && size > 1)
		{
			dst[len] = *src;
			size--;
			len++;
			src++;
		}
		dst[len] = '\0';
	}
	return (ret);
}
