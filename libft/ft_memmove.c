/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:31:03 by aamoros-          #+#    #+#             */
/*   Updated: 2023/04/23 19:28:15 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (str1 > str2)
	{
		while (i < len)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	else if (str1 < str2)
	{
		while (i >= len)
		{
			str1[len -1] = str2[len - 1];
			len --;
		}
	}
	return (dst);
}

/*int main(void)
{
	char	a[] = "Benis";
	char	b[] = "isneb Denis";
	char	c[] = "isneb Denis";
	printf("%s", memmove(b, a, 5));
	printf("%s", ft_memmove(c, a, 5));
}*/