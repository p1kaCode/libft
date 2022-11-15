/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:29:13 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/09 14:42:16 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*p;

	size = ft_strlen(s1);
	p = malloc(size * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s1, size + 1);
	return (p);
}
