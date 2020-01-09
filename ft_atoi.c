/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 15:33:10 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/19 20:00:04 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int number;
	int signe;

	number = 0;
	signe = 1;
	while (*str == ' ' || *str == '\t' || *str == '\r'
			|| *str == '\n' || *str == '\f' || *str == '\v')
		str++;
	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		signe = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str++ - '0';
	}
	return (number * signe);
}
