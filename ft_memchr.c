/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:59:20 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/17 13:35:32 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*found;

	i = 0;
	p = (unsigned char *)s;
	found = NULL;
	while (i < n)
	{
		if (*p != (unsigned char)c)
			p++;
		else
		{
			found = p;
			break ;
		}
		i++;
	}
	return (found);
}
