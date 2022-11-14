/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:47:52 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/14 14:36:54 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	_count_start_charset(char const *s, char const *set)
{
	size_t	count;
	int		i;
	int		j;
	int		char_found;

	count = 0;
	char_found = 1;
	i = -1;
	while (s[++i] && char_found)
	{
		j = 0;
		char_found = 0;
		while (set[j])
		{
			if (set[j++] == s[i])
			{
				count += 1;
				char_found = 1;
			}
		}
	}
	return (count);
}

static size_t	_count_end_charset(char const *s, char const *set)
{
	size_t	count;
	int		i;
	int		j;
	int		char_found;

	count = 0;
	i = ft_strlen(s);
	char_found = 1;
	while (s[--i] && char_found)
	{
		j = 0;
		char_found = 0;
		while (set[j])
		{
			if (set[j++] == s[i])
			{
				count += 1;
				char_found = 1;
			}
		}
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	startchar;
	size_t	endchar;
	size_t	i;

	startchar = _count_start_charset(s1, set);
	endchar = _count_end_charset(s1, set);
	if (startchar < ft_strlen(s1))
		s = malloc((ft_strlen(s1) - endchar - startchar) * sizeof(char) + 1);
	else
		return (ft_calloc(1, sizeof(char)));
	if (!s)
		return (NULL);
	if (startchar)
		i = startchar - 1;
	else
		i = 0;
	while (s1[i] && i < ft_strlen(s1) - endchar)
	{
		s[i - startchar] = s1[i];
		i++;
	}
	s[i - startchar] = 0;
	return (s);
}
