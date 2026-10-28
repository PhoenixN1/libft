/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:37:30 by momellou          #+#    #+#             */
/*   Updated: 2026/10/22 15:38:00 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	max;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	max = size * nmemb;
	if ((max / nmemb) != size)
	{
		return (NULL);
	}
	arr = (void *)malloc(size * nmemb);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * nmemb);
	return ((void *)arr);
}
// int main(void)
// {
//     size_t i;
//     int *arr;

//     /* Test 1: Normal allocation */
//     arr = ft_calloc(5, sizeof(int));
//     if (!arr)
//         return (printf("Allocation failed\n"), 1);

//     printf("Test 1: ");
//     for (i = 0; i < 5; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
//     free(arr);

//     /* Test 2: Write and read values */
//     arr = ft_calloc(5, sizeof(int));
//     if (!arr)
//         return (1);

//     arr[0] = 42;
//     arr[1] = 100;
//     printf("Test 2: %d %d\n", arr[2], arr[1]);
// 	 arr = ft_calloc(5, sizeof(int));
// 	     printf("Test 2: %d %d\n", arr[2], arr[1]);
//     free(arr);

//     /* Test 3: Zero nmemb */
//     arr = ft_calloc(0, sizeof(int));
//     printf("Test 3 (nmemb = 0): %s\n",
//         arr ? "Non-NULL pointer" : "NULL pointer");
//     free(arr);

//     /* Test 4: Zero size */
//     arr = ft_calloc(5, 0);
//     printf("Test 4 (size = 0): %s\n",
//         arr ? "Non-NULL pointer" : "NULL pointer");
//     free(arr);

//     return (0);
// }
