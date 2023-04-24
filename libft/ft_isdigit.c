/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:47:00 by aamoros-          #+#    #+#             */
/*   Updated: 2023/04/18 12:59:39 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return 1;
    else
        return 0;
}

/*int main (void)
{
    printf("%i\n", ft_isdigit(25));
}*/