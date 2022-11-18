/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:16:05 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/18 04:22:52 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!f || !s)
		return (NULL);
	str = ft_strdup(s);
	i = -1;
	if (!str)
		return (NULL);
	while (str[++i])
		str[i] = f(i, str[i]);
	return (str);
}
