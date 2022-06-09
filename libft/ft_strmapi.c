/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 14:27:00 by youngmki          #+#    #+#             */
/*   Updated: 2021/06/24 17:47:39 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		idx;

	if (!s || !f)
		return (NULL);
	if (!(res = (malloc)(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	idx = 0;
	while (s[idx])
	{
		res[idx] = f(idx, s[idx]);
		idx++;
	}
	res[idx] = '\0';
	return (res);
}
