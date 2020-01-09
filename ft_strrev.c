/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 22:13:57 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/18 22:16:03 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int j;
	int temp;
	int lentgh;

	lentgh = 0;
	while (str[lentgh] != '\0')
	{
		lentgh++;
	}
	j = lentgh - 1;
	lentgh = 0;
	while (lentgh < j)
	{
		temp = str[lentgh];
		str[lentgh] = str[j];
		str[j] = temp;
		lentgh++;
		j--;
	}
	return (str);
}
