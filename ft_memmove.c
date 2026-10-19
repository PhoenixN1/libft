/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:49:35 by momellou          #+#    #+#             */
/*   Updated: 2026/10/19 15:55:46 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*source;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	dst = (unsigned char *)dest;
	source = (const unsigned char *)src;
	if (dst == source || n == 0)
		return (dest);
	if ((unsigned long)dst > (unsigned long)source)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dst[i] = source[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst[i] = source[i];
			i++;
		}
	}
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