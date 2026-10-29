/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:50:50 by momellou          #+#    #+#             */
/*   Updated: 2026/10/29 00:49:56 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
// int main()
// {
// 	int i;
// 	char c;
// 	c = 'a';
// 	i = 0;
// 	while(i < 26)
// 	{
// 		printf("%c \n",ft_toupper(c + i));
// 		i++;
// 	}
// 	return 0;
// }