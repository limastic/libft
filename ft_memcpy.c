/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:50:39 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/08 15:15:29 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*dstcpy;
	char	*string;
	char	*srccpy;
	int		i;

	dstcpy = dst;
	i = 0;
	string = (char *) dst;
	srccpy = (char *) src;
	while ((size_t) i < n)
		string[i] = srccpy[i];
	return (dstcpy);
}
