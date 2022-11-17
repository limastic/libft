/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:39:20 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/17 23:26:21 by nfaust           ###   ########.fr       */
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

static void	*_free_tab(char **strtab, int ind)
{
	while (ind >= 0)
		free(strtab[ind--]);
	free(strtab);
	return (NULL);
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
				return (tabind);
			tabind++;
		}
	}
	return (-1);
}

char	**ft_split(char const *s, char c)
{
	char	**strtab;
	int		i;
	int		tabind;
	int		j;

	if (!s)
		return (NULL);
	strtab = malloc((_count_words(s, c) + 1) * sizeof(char *));
	if (!strtab)
	{
		return (NULL);
	}
	i = _allocate_str(strtab, s, c);
	if (!strtab || i != -1)
		return (_free_tab(strtab, i - 1));
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

//int main(int argc, char const *argv[])
//{
//	char **strtab = ft_split("          ", ' ');
//	int i = 0;
//	while (strtab[i] != NULL)
//		printf("%s\n", strtab[i++]);
//	return 0;
//}
