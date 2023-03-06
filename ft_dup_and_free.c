/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_and_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:35:40 by nfaust            #+#    #+#             */
/*   Updated: 2023/03/06 15:05:15 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_dup_and_free(char **two_dim_array, size_t index)
{
	char	*save_element;
	size_t	max_index;

	if (!two_dim_array)
		return (NULL);
	max_index = 0;
	while (two_dim_array[max_index])
		max_index++;
	if (index >= max_index)
		return (ft_free_twodimarr(two_dim_array), NULL);
	save_element = ft_strdup(two_dim_array[index]);
	if (!save_element)
		return (ft_free_twodimarr(two_dim_array), NULL);
	return (ft_free_twodimarr(two_dim_array), save_element);
}
