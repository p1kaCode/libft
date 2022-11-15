/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:32:25 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/15 11:27:55 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (elem == NULL)
		return (NULL);
	if (content)
	{
		elem->content = malloc(sizeof(content));
		if (!elem->content)
			return (NULL);
		ft_memcpy(elem->content, content, sizeof(content));
	}
	else
		elem->content = NULL;
	elem->next = NULL;
	return (elem);
}