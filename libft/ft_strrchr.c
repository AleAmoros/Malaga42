/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:13:32 by aamoros-          #+#    #+#             */
/*   Updated: 2023/04/19 12:21:32 by aamoros-         ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	s = s + i;
	while (s)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (0);
}

/*int	main(void)
{
	const char s[] = "Jennifer Juniper";
	int j = 'J';

	printf("%s\n", ft_strrchr(s, j));
}*/