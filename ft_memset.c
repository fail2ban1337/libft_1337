/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:55:04 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/08 16:16:05 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	f;
	char			*ptr;
	size_t			i;

	f = c;
	i = 0;
	ptr = str;
	while (len > i)
	{
		ptr[i] = f;
		i++;
	}
	return (str);
}
