/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:00:36 by abelomar          #+#    #+#             */
/*   Updated: 2018/10/16 17:35:17 by abelomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char				*ft_strchr(const char *s, int c)
{
	char			*temp;
	unsigned char	f;

	temp = (char *)s;
	f = c;
	while (*temp != f && *temp)
		temp++;
	if (*temp || f == '\0')
		return (temp);
	else
		return (0);
}
