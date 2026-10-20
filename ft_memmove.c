/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:49:35 by momellou          #+#    #+#             */
/*   Updated: 2026/10/20 11:02:41 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy(unsigned char *dst, const unsigned char *src,
		size_t n, int reverse)
{
	size_t	i;

	if (reverse)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dst[i] = src[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*source;

	if (!dest && !src)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	dst = (unsigned char *)dest;
	source = (const unsigned char *)src;
	if ((unsigned long)dst > (unsigned long)source)
		ft_copy(dst, source, n, 1);
	else
		ft_copy(dst, source, n, 0);
	return (dest);
}
// int main(void)
// {
//     char src[] = "Hello 1337!";
//     printf("dest: %s\n", src+3);
// 	printf("src: %s\n", src);
//     ft_memmove(src + 3, src,7);
//     printf("After:  %s\n", src);
//     return (0);
// }