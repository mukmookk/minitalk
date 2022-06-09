/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:51:21 by youngmki          #+#    #+#             */
/*   Updated: 2021/06/24 11:56:19 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	target;

	target = (unsigned char)c;
	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == target)
			return (str);
		str++;
	}
	return (NULL);
}
