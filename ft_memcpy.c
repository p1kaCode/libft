/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:47:07 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/17 13:35:51 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*s;

	if (!dst && !src)
		return (NULL);
	i = 0;
	p = dst;
	s = (char *)src;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	return (dst);
}
