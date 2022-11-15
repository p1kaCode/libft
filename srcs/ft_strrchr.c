/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:22:12 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/15 18:39:19 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*found;
	int		isfound;

	if (!c)
		return ((char *)s + ft_strlen(s));
	isfound = 0;
	while (*s)
	{
		if (*s == (char)c)
		{
			found = (char *)s;
			isfound = 1;
		}
		s++;
	}
	if (isfound)
		return (found);
	return (NULL);
}
