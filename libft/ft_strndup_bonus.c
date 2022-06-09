/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 04:31:53 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/18 18:05:03 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t size)
{
	char	*n_str;
	char	*n_cpy;

	if (!(n_str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	n_cpy = n_str;
	while (size-- > 0 && *s1)
		*n_cpy++ = *s1++;
	*n_cpy = '\0';
	return (n_str);
}
