/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 05:06:28 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/18 17:47:43 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double				ft_pow(double base, double n)
{
	double res;

	res = 1;
	while (n-- > 0)
	{
		res = res * base;
	}
	return (res);
}
