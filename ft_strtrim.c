/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 20:04:12 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/17 18:47:59 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	int			i;
	int			len;
	const char	*temp;

	temp = s;
	i = 0;
	if (s)
	{
		len = ft_strlen((char *)s);
		while ((*temp == ' ' || *temp == '\n' || *temp == '\t') && (*temp))
		{
			temp++;
			i++;
			len--;
		}
		while ((temp[len - 1] == ' ' || temp[len - 1]
					== '\n' || temp[len - 1] == '\t') && (len > 0))
			len--;
		return (ft_strsub(s, i, len));
	}
	return (0);
}
