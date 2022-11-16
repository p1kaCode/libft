/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:51:04 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/16 17:22:29 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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

int	size_chain_trimmed(char const *s1, char const *set)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (contains(s1[i], set))
	{
		count++;
		i++;
	}
	if (i < ft_strlen(s1) - 1)
		i = ft_strlen(s1) - 1;
	while (contains(s1[i], set))
	{
		count++;
		i--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	size;
	char			*p;
	unsigned int	i;
	unsigned int	k;

	if (!s1)
		return (NULL);
	size = ft_strlen(s1) - size_chain_trimmed(s1, set);
	p = malloc(size * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (contains(s1[i], set))
		i++;
	while (k < size)
	{
		p[k] = s1[i];
		i++;
		k++;
	}
	p[k] = '\0';
	return (p);
}
