/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:26:15 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/09 16:25:14 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_checkparams(char *dst, size_t dstsize)
{
	if (ft_strlen(dst) > dstsize)
		return (0);
	return (1);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		index;
	int		i;
	size_t	dststartlen;

	index = ft_strlen(dst);
	dststartlen = ft_strlen(dst);
	i = 0;
	if (!_checkparams(dst, dstsize) || !dstsize)
		return (dstsize + ft_strlen(src));
	while (ft_strlen(dst) < dstsize - 1 && src[i])
		dst[index++] = src[i++];
	dst[index] = 0;
	return (dststartlen + ft_strlen(src));
}
