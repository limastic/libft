/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:46:39 by nfaust            #+#    #+#             */
/*   Updated: 2022/11/08 19:06:32 by nfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstcpy;
	unsigned char	*srccpy;

	srccpy = (unsigned char *) src;
	dstcpy = (unsigned char *) dst;
	//printf("eferjfore\n");
	if (srccpy < dstcpy)
		ft_memcpy(dst, src, len);
	else
	{
		//printf("aaaaa\n");
		while (len-- > 0)
		{
			//printf("%zu\n", len);
			dstcpy[len] = srccpy[len];
		}
	}
	return (dst);
}

int main(void)
{
	char	str[50] = "123456789";
	char	str3[50] = "pmnoik456789123";
	char	str2[50] = "pmnoik456789123";
	char	str1[50] = "123456";
	size_t	len = 10;
	printf("[%c]\n", str1[10]);
	printf("%s, %s", ft_memmove(str1, str2, len), memmove(str, str3, len));
	return 0;
}
