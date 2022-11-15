/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:39:21 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/15 16:18:05 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_reverse_str(char *str)
{
	char	tmp;
	int		size;
	int		i;

	size = ft_strlen(str);
	i = 0;
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
	return (str);
}

int	ft_sizeint(int n)
{
	unsigned int	nb;
	int				sizeint;

	nb = n;
	sizeint = 0;
	if (n < 0)
		nb = -n;
	if (n == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		sizeint++;
	}
	return (sizeint);
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	nb;
	int				i;
	int				minus;

	minus = 0;
	if (n < 0)
		minus = 1;
	s = malloc(sizeof(char) * ft_sizeint(n) + 1 + minus);
	if (!s)
		return (NULL);
	nb = n;
	if (n < 0)
		nb = -n;
	i = 0;
	while (i < ft_sizeint(n))
	{
		s[i] = nb % 10 + 48;
		nb = nb / 10;
		i++;
	}
	if (n < 0)
		s[i] = '-';
	s[ft_sizeint(n) + minus] = 0;
	return (ft_reverse_str(s));
}
