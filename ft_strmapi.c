/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 12:01:28 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/16 17:22:16 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;

	i = 0;
	if (s)
	{
		ptr = (char *)malloc(ft_strlen((char *)s) + 1 * sizeof(char));
		if (!ptr)
			return (0);
		else
			while (s[i] != '\0')
			{
				ptr[i] = f(i, s[i]);
				i++;
			}
		ptr[i] = '\0';
		return (ptr);
	}
	return (0);
}
