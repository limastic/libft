/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:06:31 by nfaust            #+#    #+#             */
/*   Updated: 2023/03/06 14:52:16 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printfree(char *str)
{
	size_t	str_len;

	if (!str || !str[0])
		return (write(1, "\"\"\n", 3), (void) 0);
	str_len = ft_strlen(str);
	write(1, str, str_len);
	write(1, "\n", 1);
	free(str);
}
