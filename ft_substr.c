/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:14:43 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/18 04:18:56 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	int		i;

	if (!s)
		return (NULL);
	if (!len || start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (ft_strlen(s) >= len)
		subs = malloc(len * (size_t) sizeof(char) + 1);
	else
		subs = malloc(ft_strlen(s) * (size_t) sizeof(char) + 1);
	if (!subs)
		return (NULL);
	start -= 1;
	i = 0;
	while (s[++start] && (size_t) i < len)
		subs[i++] = s[start];
	subs[i] = 0;
	return (subs);
}
