/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:39:45 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/14 20:48:29 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr_is_negative;
	int	result;

	nbr_is_negative = 0;
	result = 0;
	i = 0;
	while (str[i] == 32 || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
				nbr_is_negative = 1;
	while (str[i])
	{
		if ('0' <= str[i] && str[i] <= '9')
			result = result * 10 + str[i++] - '0';
		else if (result)
			break ;
		else
			return (0);
	}
	if (nbr_is_negative)
		result = (long)result * -1;
	return (result);
}
