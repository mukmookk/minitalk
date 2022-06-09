/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 18:18:28 by youngmki          #+#    #+#             */
/*   Updated: 2021/06/24 10:34:32 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*head;

	if (lst == NULL || new == NULL)
		return ;
	head = *lst;
	new->next = head;
	*lst = new;
}
