/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 22:52:19 by youngmki          #+#    #+#             */
/*   Updated: 2021/06/26 18:42:09 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char		*n_src;
	int			i;

	n_src = (char *)s;
	i = 0;
	while (n_src[i])
		i++;
	while (i >= 0)
	{
		if ((unsigned char)c == n_src[i])
			return (n_src + sizeof(char) * i);
		i--;
	}
	return (NULL);
}
