/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:19:18 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/16 17:58:01 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	if (!*needle)
		return ((char *)haystack);
	if (!len)
		return (NULL);
	i = 0;
	p = (char *)haystack;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			p = (char *)haystack;
			j = 0;
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				if (!needle[j + 1])
					return (p);
				j++;
			}
			p = 0;
		}
		i++;
	}
	return (NULL);
}
