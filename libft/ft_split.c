/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngmki <youngmki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 04:31:26 by youngmki          #+#    #+#             */
/*   Updated: 2021/05/22 22:44:52 by youngmki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		g_wrd_cnt(const char *s, char c)
{
	size_t		s_count;
	int			i;

	s_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] == c)
			i++;
		else if (s[i] && s[i] != c)
		{
			s_count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (s_count);
}

static char			*strcpy_delim(char *dst, const char *src, char c)
{
	int		i;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i] && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static void			dealloc_mems(char **strs, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static void			split_act(char **strs, char const *s, char c)
{
	int			i;
	int			j;
	int			start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] && s[i] == c)
			i++;
		else if (s[i] && s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			if (!(strs[j] = (malloc)(sizeof(char) * (i - start + 1))))
			{
				dealloc_mems(strs, g_wrd_cnt(s, j));
				return ;
			}
			strcpy_delim(strs[j], &s[start], c);
			j++;
		}
	}
}

char				**ft_split(char const *s, char c)
{
	char		**strs;
	size_t		wrd_cnt;

	wrd_cnt = g_wrd_cnt(s, c);
	if (!s)
		return (NULL);
	if (!(strs = (malloc)((wrd_cnt + 1) * sizeof(char *))))
		return (NULL);
	strs[wrd_cnt] = 0;
	if (wrd_cnt == 0)
		return (strs);
	split_act(strs, s, c);
	return (strs);
}
