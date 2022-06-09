/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 01:40:06 by youngmki          #+#    #+#             */
/*   Updated: 2021/06/22 02:42:53 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*cur;
	t_list		*next;

	if (!lst || !del)
		return ;
	if (!*lst)
		return ;
	cur = *lst;
	while (cur != NULL)
	{
		next = cur->next;
		del(cur->content);
		free(cur);
		cur = next;
	}
	*lst = NULL;
}
