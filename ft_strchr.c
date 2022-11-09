/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:26:29 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/09 16:37:57 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;

	ch = (char) c;
	i = 0;
	while (1)
	{
		if ((size_t) i > ft_strlen(s) + 2)
			return (NULL);
		else if (s[i++] == ch)
			break ;
	}	
	return ((char *) s + i - 1);
}
