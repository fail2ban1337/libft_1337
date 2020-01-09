/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 17:08:09 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/10 14:29:59 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	ft_strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len + 1);
}

char		*ft_strdup(const char *s1)
{
	char	*rang;
	int		counter;

	counter = 0;
	rang = (char *)malloc(ft_strlen((char *)s1) * sizeof(char));
	if (!rang)
		return (0);
	while (s1[counter] != '\0')
	{
		rang[counter] = s1[counter];
		counter++;
	}
	rang[counter] = '\0';
	return (rang);
}
