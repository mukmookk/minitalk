/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 04:03:01 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/22 22:45:29 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			get_length(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	len++;
	return (len);
}

static void			fill_res(int n, char res[], int length)
{
	int		i;
	int		digits;

	i = 0;
	digits = 2;
	while (n > 9 || n < 0 || digits > 1)
	{
		digits = (int)(ft_pow(10, length - 1));
		if (n < 0)
		{
			res[i++] = '-';
			n *= -1;
		}
		else if (digits > 1)
		{
			res[i++] = (n / digits) + '0';
			n %= digits;
		}
		length--;
	}
	digits = (int)(ft_pow(10, length - 1));
	res[i++] = (n / digits) + '0';
	res[i] = '\0';
}

char				*ft_itoa(int n)
{
	int		length;
	char	*res;

	if (n == INT_MIN)
	{
		length = 14;
		if (!(res = (malloc)(sizeof(char) * (length + 1))))
			return (NULL);
		ft_strlcpy(res, STR_MIN_INT, length + 1);
		return (res);
	}
	length = get_length(n);
	if (!(res = (malloc)(sizeof(char) * (length + 1))))
		return (NULL);
	fill_res(n, res, length);
	return (res);
}
