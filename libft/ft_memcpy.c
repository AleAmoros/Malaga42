/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:26:07 by aamoros-          #+#    #+#             */
/*   Updated: 2023/04/20 14:21:59 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str2;

	i = 0;
	str = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (i < n)
	{
		str[i] = str2[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char a[] = "Hello";
// 	char b[] = "World";
// 	size_t l = 1;
// 	printf("%s", ft_memcpy(a, b, l));
// }