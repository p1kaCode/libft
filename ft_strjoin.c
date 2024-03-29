/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:25:22 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/17 13:38:18 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	tomalloc;

	if (!s1 || !s2)
		return (NULL);
	tomalloc = ft_strlen(s1) + ft_strlen(s2);
	p = malloc(tomalloc * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s1, ft_strlen(s1) + 1);
	ft_strlcat(p, s2, tomalloc + 1);
	return (p);
}
