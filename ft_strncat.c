/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 18:05:18 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/16 17:20:55 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	ft_strlen(char *s)
{
	int		len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		counter;
	int		i;

	counter = 0;
	i = ft_strlen(s1);
	while (n-- && s2[counter])
	{
		s1[i + counter] = s2[counter];
		counter++;
	}
	s1[i + counter] = '\0';
	return (s1);
}
