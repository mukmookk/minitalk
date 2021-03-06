/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 04:30:08 by youngmki          #+#    #+#             */
/*   Updated: 2021/06/24 13:41:01 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	size_t		i;

	i = 0;
	if (n <= 0)
		return ;
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}
