/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:32:25 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/16 17:36:54 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(elem));
	if (elem == NULL)
		return (NULL);
	if (content)
		elem->content = content;
	else
		elem->content = NULL;
	elem->next = NULL;
	return (elem);
}
