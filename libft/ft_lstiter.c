/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 02:41:04 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/18 17:49:22 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list		*cur;

	if (!lst)
		return ;
	cur = lst;
	while (cur != NULL)
	{
		f(cur->content);
		cur = cur->next;
	}
}
