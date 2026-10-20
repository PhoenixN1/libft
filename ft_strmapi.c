/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:47:14 by momellou          #+#    #+#             */
/*   Updated: 2026/10/20 10:49:53 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// char	ft_test(unsigned int i, char c)
// {
// 	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// int	main(void)
// {
// 	char	*str;
// 	char	*result;

// 	str = "bonjour";
// 	result = ft_strmapi(str, ft_test);
// 	if (!result)
// 		return (1);
// 	printf("Original : %s\n", str);
// 	printf("Resultat : %s\n", result);
// 	free(result);
// 	return (0);
// }