/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:39:20 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/14 18:08:22 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	char_found;

	count = 0;
	char_found = 0;
	i = -1;
	while (s[++i])
	{
		char_found = 0;
		while (s[i] == c)
		{
			i++;
			char_found = 1;
		}
		if ((char_found || i == 0) && s[i])
			count++;
	}
	return (count);
}

static int	_allocate_str(char **strtab, char const *s, char c)
{
	int	i;
	int	j;
	int	tabind;

	i = -1;
	tabind = 0;
	while (s[++i])
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i++] != c)
			j++;
		i--;
		if (j)
		{
			strtab[tabind] = malloc((j + 1) * sizeof(char));
			if (!strtab[tabind])
				return (0);
			tabind++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**strtab;
	int		i;
	int		tabind;
	int		j;

	strtab = malloc((_count_words(s, c) + 1) * sizeof(char *));
	if (!strtab || !_allocate_str(strtab, s, c))
		return (NULL);
	i = -1;
	tabind = -1;
	while (s[++i])
	{
		if (s[i] && s[i] != c)
		{
			tabind++;
			j = 0;
			while (s[i] != c && s[i])
				strtab[tabind][j++] = s[i++];
			i--;
			strtab[tabind][j] = 0;
		}
	}
	strtab[++tabind] = 0;
	return (strtab);
}
