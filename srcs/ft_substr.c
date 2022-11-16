/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:47:21 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/16 17:53:21 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	tomalloc;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		p = malloc(sizeof(char) * 1);
		if (p == NULL)
			return (NULL);
		p[0] = 0;
		return (p);
	}
	if (len <= ft_strlen(s))
		tomalloc = len;
	else
		tomalloc = ft_strlen(s) - start;
	p = malloc(sizeof(char) * tomalloc + 1);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s + start, tomalloc + 1);
	return (p);
}
