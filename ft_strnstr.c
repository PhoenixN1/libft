/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:50:31 by momellou          #+#    #+#             */
/*   Updated: 2026/10/19 15:57:49 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j]
			&& little[j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
// int main(void)
// {
//     const char *big = "Hello 1337 World";
//     printf("Test 1: %s\n", ft_strnstr(big, "1337", 16));
//     printf("Test 2: %s\n", ft_strnstr(big, "1337", 4));
//     printf("Test 3: %s\n", ft_strnstr(big, "World", 10));
//     printf("Test 4: %s\n", ft_strnstr(big, "Hello", 5));
//     printf("Test 5: %s\n", ft_strnstr(big, "", 16));
//     printf("Test 6: %s\n", ft_strnstr(big, "abc", 16));
//     printf("Test 7: %s\n", ft_strnstr(big, "1337", 5));
//     return (0);
// }