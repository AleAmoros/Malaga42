/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:08:36 by aamoros-          #+#    #+#             */
/*   Updated: 2023/04/20 12:02:21 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	s = b;
	i = 0;
	while (i < len)
	{
		*s = c;
		s++;
		i++;
	}
	return (b);
}

// int	main(void)
// {
//     char str[] = "The DJ";
//     int c = 'J';
//     size_t l = 4;
// 	printf("%s", ft_memset(str, c, l));
// }