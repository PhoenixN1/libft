/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:30:17 by momellou          #+#    #+#             */
/*   Updated: 2026/10/24 13:11:20 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// int	main(void)
// {
// 	int				str;
// 	unsigned char	*ptr;

// 	ptr = (unsigned char *)&str;
// 	ft_memset(ptr, 57, 1);
// 	ft_memset(ptr + 1, 5, 1);
// 	printf("%d\n", str);
// 	return (0);
// }