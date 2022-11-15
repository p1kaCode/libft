/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:19:18 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/15 20:25:24 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*p;

	if (!haystack || !*needle)
		return ((char *)haystack);
	if (!len)
		return (NULL);
	i = 0;
	if (ft_strlen(needle) < len )
		len = ft_strlen(needle);
	p = (char *)haystack;
	while (haystack[i])
	{
		if (!ft_strncmp(p, needle, len))
			return ((char *)p);
		p++;
		i++;
	}
	return (NULL);
}

int main()
{
	char haystack[] = "aaabcabcd";
	char needle[] = "aabc";

	printf("%s\n", ft_strnstr(haystack, "cd", 8));
	printf("%s\n", strnstr(haystack, "cd", 8));
}
