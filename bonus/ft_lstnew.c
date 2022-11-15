/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:32:25 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/15 16:48:49 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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
