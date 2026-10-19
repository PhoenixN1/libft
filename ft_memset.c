/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:30:17 by momellou          #+#    #+#             */
/*   Updated: 2026/10/19 16:02:50 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *ptr;
    size_t          i;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (s);
}
int main()
{
	char str1[20] = "Hellohhh";

	printf("Avant ft_memset : %s\n", str1);
	ft_memset(str1, 'X', 5);
	printf("Apres ft_memset : %s\n", str1);
	return 0;
}