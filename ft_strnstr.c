/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:40:46 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/15 21:33:33 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_memcmpp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr1 == *ptr2)
		{
			ptr1++;
			ptr2++;
			if (!*ptr2)
				return (0);
		}
		else
			return (*ptr1 - *ptr2);
	}
	return (1);
}

char				*ft_strnstr(const char *haystack
					, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		if (ft_memcmpp(haystack, needle, len) == 0)
			return ((char *)haystack);
		else
		{
			haystack++;
			len--;
		}
	}
	return (0);
}
