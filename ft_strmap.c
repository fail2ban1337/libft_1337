/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 11:45:22 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/16 17:26:23 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	int		i;

	if (s)
	{
		i = 0;
		ptr = (char *)malloc(ft_strlen((char *)s) + 1 * sizeof(char));
		if (!ptr)
			return (0);
		else
			while (s[i] != '\0')
			{
				ptr[i] = f(s[i]);
				i++;
			}
		ptr[i] = '\0';
		return (ptr);
	}
	return (0);
}
