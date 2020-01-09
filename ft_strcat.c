/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 12:52:45 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/10 14:25:06 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int		ft_strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char			*ft_strcat(char *s1, const char *s2)
{
	int counter;
	int i;

	counter = 0;
	i = ft_strlen(s1);
	while (s2[counter])
	{
		s1[i + counter] = s2[counter];
		counter++;
	}
	s1[i + counter] = '\0';
	return (s1);
}
