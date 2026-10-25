/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:50:38 by momellou          #+#    #+#             */
/*   Updated: 2026/10/24 19:46:41 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = ft_strlen(s);
	while (1)
	{
		if ((unsigned char)s[i] == ch)
			return ((char *)&s[i]);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
// int	main(void)
// {
// 	const char	*s = "Hello World";

// 	printf("ft_strrchr : %s\n", ft_strrchr(s, 'l'));
// 	printf("strrchr    : %s\n\n", strrchr(s, 'l'));
// }