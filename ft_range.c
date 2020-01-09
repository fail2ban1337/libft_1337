/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 22:16:19 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/18 22:16:49 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_range(int min, int max)
{
	int *ran;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	ran = (int *)malloc(((max - min)) * sizeof(int));
	while (max > min)
	{
		ran[i] = min;
		i++;
		min++;
	}
	return (ran);
}
