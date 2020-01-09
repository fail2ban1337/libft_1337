/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 17:42:21 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/15 21:14:06 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	if (s)
	{
		ptr = (char *)malloc((len * sizeof(char) + 1));
		if (!ptr)
			return (0);
		else
			while (s[start] != '\0' && len--)
			{
				ptr[i] = s[start];
				i++;
				start++;
			}
		ptr[i] = '\0';
		return (ptr);
	}
	return (0);
}
