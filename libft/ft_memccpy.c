/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 04:30:59 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/22 23:22:13 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char	*n_dest;
	unsigned char	*n_src;
	int				target;
	size_t			i;

	n_dest = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	target = c;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < len)
	{
		n_dest[i] = n_src[i];
		if (n_dest[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
