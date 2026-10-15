/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:42:27 by momellou          #+#    #+#             */
/*   Updated: 2026/10/15 14:47:07 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
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