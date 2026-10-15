/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:49:35 by momellou          #+#    #+#             */
/*   Updated: 2026/10/14 18:13:16 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*srcs;

	i = 0;
	dst = (char *)dest;
	srcs = (char *)src;
	if (!dst && !srcs)
		return (0);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		printf("dest > src ::   ");
		while (i < n)
		{
			dst[n - 1 - i] = srcs[n - 1 - i];
			i++;
		}
	}
	while (i < n)
	{
		dst[i] = srcs[i];
		i++;
	}
	return (dst);


int main(void)
{
    char src[] = "Hello 1337!";
	
    printf("dest: %s\n", src+3);
	printf("src: %s\n", src);

    ft_memmove(src + 3, src,7);

    printf("After:  %s\n", src);

    return (0);
}