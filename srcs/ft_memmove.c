/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:44:34 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/15 16:21:45 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*p;
	char	*s;
	char	tmp;

	i = 0;
	p = dst;
	s = (void *)src;
	while (i < len)
	{
		if (s[i])
		{
			tmp = s[i];
			p[i] = tmp;
		}
		else
		{
			p[i] = 0;
			return (dst);
		}
		i++;
	}
	return (dst);
}
