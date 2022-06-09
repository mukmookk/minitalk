/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 04:32:11 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/18 18:12:05 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isupper(int c)
{
	return ((65 <= c) && (90 >= c));
}

int				ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
