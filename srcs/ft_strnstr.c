/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:19:18 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/09 13:42:33 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_len;
	size_t	i;

	if (!needle)
		return ((char *)haystack);
	i = 0;
	haystack_len = ft_strlen(haystack);
	while (i < haystack_len - len)
	{
		if (!ft_strncmp(haystack, needle, len))
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
