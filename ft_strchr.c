/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:49:48 by momellou          #+#    #+#             */
/*   Updated: 2026/10/15 14:46:48 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strchr(const char *s, int c)
{
	char x;

	x = (char)c;
	while (*s)
	{
		if (*s == x)
			return ((char *)s);
		s++;
	}
	if (*s == x)
		return ((char *)s);
	return (NULL);
}
// int main(void)
// {
//     char str[] = "lHeo 1337";
//     char *result;

//     result = ft_strchr(str, 'l');
//     printf("Result: %s\n", result);
//     return (0);
// }