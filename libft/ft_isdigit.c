/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 04:30:45 by youngmki          #+#    #+#             */
/*   Updated: 2021/06/23 22:23:03 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}