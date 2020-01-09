/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 16:33:39 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/16 17:53:48 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_calculint(int n)
{
	int				i;

	i = 0;
	if (n <= 0)
	{
		i++;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	char			*ptr;
	int				f;
	unsigned int	nbr;

	f = ft_calculint(n);
	ptr = (char *)malloc(f + 1);
	if (!ptr)
		return (0);
	ptr[f--] = '\0';
	if (n == 0)
		ptr[f] = 0 + '0';
	if (n < 0)
	{
		ptr[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	while (nbr)
	{
		ptr[f--] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (ptr);
}
