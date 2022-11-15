/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:59:20 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/09 13:31:32 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*p;
	char	*found;

	i = 0;
	p = (char *)s;
	found = NULL;
	while (i < n && s != NULL)
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
