/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:38:14 by momellou          #+#    #+#             */
/*   Updated: 2026/10/21 12:16:54 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr;
	const unsigned char	*ptr1;
	size_t				i;

	ptr = (const unsigned char *)s1;
	ptr1 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr[i] != ptr1[i])
			return (ptr[i] - ptr1[i]);
		i++;
	}
	return (0);
}
// int main()
// {
//     char *s1;
// 	s1 = "te\0te";
//     char *s2;
// 	s2 = "te\0te";

//     printf("%d\n", ft_memcmp(s1, s2, 9));
//     return (0);
// }