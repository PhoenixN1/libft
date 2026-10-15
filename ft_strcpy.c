/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:45:24 by momellou          #+#    #+#             */
/*   Updated: 2026/10/15 14:46:53 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// int main(void)
// {
//     char src[] = "Hello 1337";
//     char dest[20];

//     printf("Before: dest is empty\n");

//     ft_strcpy(dest, src);

//     printf("Source: %s\n", src);
//     printf("Dest:   %s\n", dest);

//     return (0);
// }