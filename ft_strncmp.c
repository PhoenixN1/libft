/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:42:27 by momellou          #+#    #+#             */
/*   Updated: 2026/10/21 12:05:36 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < n)
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 != c2)
			return (c1 - c2);
		if (c1 == '\0')
			return (0);
		i++;
	}
	return (0);
}
// int main(void)
// {
//     char s1[] = "Hello";
//     char s2[] = "Hello";
//     char s3[] = "HelLo";

//     printf("Test 1: %d\n", ft_strncmp(s1, s2, 5));
//     printf("Test 2: %d\n", ft_strncmp(s1, s3, 5));
//     printf("Test 3: %d\n", ft_strncmp(s1, s3, 3));
//     printf("Test 4: %d\n", ft_strncmp(s1, s3, 0));

//     return (0);
// }