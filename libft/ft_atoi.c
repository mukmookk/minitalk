/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 04:30:01 by youngmki          #+#    #+#             */
/*   Updated: 2021/06/24 17:31:12 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long			check_over_range(unsigned long long sum, int sign)
{
	if (sum > LLONG_MAX && sign == -1)
		return (0);
	if (sum >= LLONG_MAX && sign == 1)
		return (-1);
	return (sum * sign);
}

int					ft_atoi(const char *str)
{
	long long		i;
	long long		sign;
	long long		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (check_over_range(result, sign));
}
