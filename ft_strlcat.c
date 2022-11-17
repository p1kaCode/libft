/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:33:56 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/17 13:38:36 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	init_dest_size;
	size_t	index_dest;
	size_t	to_add;

	if (!dstsize)
		return (ft_strlen(src));
	init_dest_size = ft_strlen(dst);
	if (dstsize <= init_dest_size)
		return (ft_strlen(src) + dstsize);
	to_add = dstsize - ft_strlen(dst) - 1;
	i = 0;
	index_dest = ft_strlen(dst);
	while (i < to_add && src[i])
	{
		dst[index_dest] = src[i];
		i++;
		index_dest++;
	}
	if (dstsize > 0)
		dst[index_dest] = '\0';
	return (init_dest_size + ft_strlen(src));
}
