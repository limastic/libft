/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:09:37 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/09 17:26:20 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	char			*str;
	int				i;

	str = (char *)s;
	ch = (unsigned char) c;
	i = -1;
	while ((size_t)++i < n)
		if (ch == str[i])
			return ((void *) s + i);
	return (NULL);
}
