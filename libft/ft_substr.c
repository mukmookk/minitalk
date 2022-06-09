/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 04:32:08 by youngmki          #+#    #+#             */
/*   Updated: 2021/06/26 16:55:28 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	if (s == NULL)
		return (NULL);
	if ((size_t)ft_strlen(s) < start)
		return (ft_strdup(""));
	len = (ft_strlen(s) - start < len) ? ft_strlen(s) - start : len;
	if (s)
		return (ft_strndup(&s[start], len));
	return (NULL);
}
