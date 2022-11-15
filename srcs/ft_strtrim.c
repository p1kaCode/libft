/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:51:04 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/15 11:03:32 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	how_many_contains(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	nb;

	i = 0;
	nb = 0;
	while (s1[i])
	{
		y = 0;
		while (set[y])
		{
			if (s1[i] == set[y])
				nb++;
			y++;
		}
		i++;
	}
	return (nb);
}

int	contains(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	size;
	char			*p;
	unsigned int	i;
	unsigned int	k;

	size = ft_strlen(s1) - how_many_contains(s1, set);
	p = malloc(size * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i])
	{
		if (!contains(s1[i], set))
		{
			p[k] = s1[i];
			k++;
		}
		i++;
	}
	return (p);
}
