/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 19:12:47 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/16 17:54:55 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_word(const char *str, char c)
{
	int		words;
	int		a;

	words = 0;
	a = 0;
	if (*str == '\0')
		return (0);
	while (*str)
	{
		if (*str == c)
		{
			str++;
			a = 0;
		}
		else
		{
			if (a == 0)
				words++;
			a = 1;
			str++;
		}
	}
	return (words);
}

static char	*char_counter(const char *str, char c, int *n)
{
	char	*word;
	int		i;
	int		start;
	int		end;

	i = *n;
	while (str[i] == c)
		i++;
	start = i;
	while (str[i] != c && str[i])
		i++;
	end = i;
	*n = i;
	word = (char *)malloc(end - start + 1);
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char		**ft_strsplit(char const *str, char c)
{
	char	**res;
	int		count;
	int		i;
	int		w;

	if (str && c)
	{
		w = ft_check_word(str, c);
		res = (char**)malloc(sizeof(char*) * (w + 1));
		if (res == NULL)
			return (0);
		count = 0;
		i = 0;
		while (count < w)
		{
			res[count] = char_counter(str, c, &i);
			count++;
		}
		res[count] = 0;
		return (res);
	}
	return (0);
}
