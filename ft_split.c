/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:50:25 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/17 15:46:09 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_nb_words(const char *s, char c)
{
	int	i;
	int	prev_i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		prev_i = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > prev_i)
			nb_words++;
	}
	return (nb_words);
}

char	**free_tab(char **strs)
{
	int	i;

	i = 0;
	while (strs[i] != NULL)
		free(strs[i]);
	free(strs);
	return (NULL);
}

char	**fill_tab(char const *s, char c, char **strs)
{
	int	k;
	int	i;
	int	prev_i;

	i = 0;
	k = 0;
	while (k < count_nb_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		prev_i = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > prev_i)
		{
			strs[k] = ft_substr(s, prev_i, i - prev_i);
			if (!strs[k])
				return (free_tab(strs));
		}
		k++;
	}
	strs[k] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	strs = malloc((count_nb_words(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	strs = fill_tab(s, c, strs);
	if (!strs)
		return (NULL);
	return (strs);
}
