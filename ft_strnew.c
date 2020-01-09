/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 16:52:39 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/18 16:02:36 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(size * sizeof(char) + 1);
	if (!ptr)
		return (0);
	ft_memset(ptr, '\0', size + 1);
	return (ptr);
}
