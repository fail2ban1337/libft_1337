/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 19:16:52 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/16 18:07:47 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	if (s1 && s2)
	{
		ptr = (char *)malloc(ft_strlen(((char *)s1)
					+ ft_strlen((char *)s2) + 1));
		if (!ptr)
			return (0);
		else
		{
			ft_strcpy(ptr, s1);
			ft_strcat(ptr, s2);
			return (ptr);
		}
	}
	return (0);
}
