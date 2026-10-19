/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:49:16 by momellou          #+#    #+#             */
/*   Updated: 2026/10/18 01:56:33 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	const unsigned char	*src2;
	size_t				i;

	if (dest == 0 || src == 0)
		return (NULL);
	dest2 = (unsigned char *)dest;
	src2 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);

}
// int	main(void)
// {
// 	char	str[] = "Hello 1337!";

// 	char	*src = str;
// 	char	*dest = str + 3;

// 	printf("str Avant memcpy : %s\n", str);
// 	printf("src  : %s\n", src);
// 	printf("dest : %s\n", dest);

// 	ft_memcpy(dest, src, 5);

// 	printf("str Apres memcpy : %s\n", str);
// 	return (0);
// }