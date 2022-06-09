/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 04:31:35 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/14 04:31:36 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	int		i;

	i = 0;
	if ((s = (char *)(malloc)(sizeof(char) * ft_strlen(str) + 1)) != NULL)
		s[ft_strlen(str)] = '\0';
	else
		return (NULL);
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
