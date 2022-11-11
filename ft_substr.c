/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:14:43 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/11 11:22:10 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;

	subs = malloc(len * (size_t) sizeof(char) + 1);
	if (!subs)
		return (NULL);
	start -= 1;
	while (s[++start] && (size_t) start < len)
		subs[start] = s[start];
	subs[start] = 0;
	return (subs);
}
