/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:33:01 by aamoros-          #+#    #+#             */
/*   Updated: 2023/04/23 19:07:05 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	h;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	h = (unsigned char)c;
	while (i < n)
	{
		if (*str == h)
			return ((void *)str);
		str++;
		i++;
	}
	return (0);
}

int main (void)
{
	const char *str = "Jennifer Juniper";
	int j = 'n';
	//printf("%s", memchr(str, j, 5));
	printf("%s", ft_memchr(str, j, 5));	
}



