/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:26:29 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/15 02:22:14 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		ch;
	size_t		i;

	ch = (char) c;
	i = 0;
	while (s[i++] != ch)
		if (i > ft_strlen(s))
			return (NULL);
	return ((char *) s + i - 1);
}
