/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:38:58 by lmorel            #+#    #+#             */
/*   Updated: 2022/11/15 17:46:53 by lmorel           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*after;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		after = current->next;
		del(current->content);
		free(current);
		current = after;
	}
	*lst = NULL;
}
