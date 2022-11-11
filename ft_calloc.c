/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:24:03 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/11 10:45:59 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	alloc = malloc(size * count);
	if (alloc == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memset(alloc, 0, size);
	return (alloc);
}
