/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 04:32:14 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/18 18:12:31 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_islower(int c)
{
	return ((97 <= c) && (122 >= c));
}

int				ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
