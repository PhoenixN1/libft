/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:50:01 by momellou          #+#    #+#             */
/*   Updated: 2026/10/17 11:55:30 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
// int main(void)
// {
//     char src[] = "Hello 1337";
//     char *copy;

//     copy = ft_strdup(src);
//     if (copy == NULL)
//     {
//         printf("Allocation failed\n");
//         return (1);
//     }

//     printf("Source: %s\n", src);
//     printf("Copy:   %s\n", copy);

//     copy[0] = 'Y';

//     printf("Modified copy: %s\n", copy);
//     printf("Original:      %s\n", src);

//     free(copy);
//     return (0);
// }