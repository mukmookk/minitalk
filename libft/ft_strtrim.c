/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 04:32:05 by youngmki          #+#    #+#             */
/*   Updated: 2021/06/26 18:12:31 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	else if (!set)
		return (ft_strdup(s1));
	while (s1[start] && ft_strchr(set, (int)*(s1 + start)))
		start++;
	while (s1[end] && ft_strchr(set, (int)*(s1 + end)))
	{
		if (end < 1)
			break ;
		end--;
	}
	if (start > end)
		return (ft_strdup(""));
	if (!(res = (char *)malloc(sizeof(char) * (end - start + 2))))
		return (NULL);
	ft_strlcpy(res, s1 + start, end - start + 2);
	return (res);
}
