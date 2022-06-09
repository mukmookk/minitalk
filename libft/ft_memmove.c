/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:52:14 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/23 00:55:10 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*n_dst;
	unsigned char		*n_src;

	n_dst = dst;
	n_src = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (n_dst <= n_src)
	{
		n_dst = dst;
		n_src = (unsigned char*)src;
		while (len--)
			*n_dst++ = *n_src++;
	}
	else
	{
		n_dst = dst + len;
		n_src = (unsigned char*)src;
		n_src += len;
		while (len--)
			*(--n_dst) = *(--n_src);
	}
	return (dst);
}
