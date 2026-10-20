/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:00:25 by momellou          #+#    #+#             */
/*   Updated: 2026/10/20 10:50:22 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void	ft_test(unsigned int i, char *c)
// {
// 	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }

// int	main(void)
// {
// 	char	str[] = "bonjour";

// 	printf("Avant : %s\n", str);
// 	ft_striteri(str, ft_test);
// 	printf("Apres : %s\n", str);
// 	return (0);
// }