/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:34:13 by aamoros-          #+#    #+#             */
/*   Updated: 2023/04/25 17:08:33 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	d1;
	size_t	s1;

	s1 = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (s1);
	d = ft_strlen(dst);
	d1 = d;
	if (dstsize <= d1)
		return (dstsize + s1);
	s = 0;
	while (src[s] && d + 1 < dstsize)
	{
		dst[d] = src [s];
		s++;
		d++;
	}
	dst[d] = 0;
	return (d1 + s1);
}

/* int	main(void)
{
	char			str[] = "Benis";
	const	char	str2[] = "Program";
	size_t	n = 0;

	printf("%zu", ft_strlcat(str, str2, n));
} */
