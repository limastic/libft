/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:37:41 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/11 09:38:23 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		save_i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	i = 0;
	j = 0;
	if (!needle[j])
		return ((char *) haystack);
	while (haystack[i] && (size_t) i < len)
	{
		save_i = i;
		while ((size_t) i < len && needle[j++] == haystack[i++])
			if ((size_t) j == needle_len)
				return ((char *) haystack + i - needle_len);
		j = 0;
		i = save_i;
		i++;
	}
	return (NULL);
}
