/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:06:12 by momellou          #+#    #+#             */
/*   Updated: 2026/10/20 15:35:55 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*str;

	str = malloc(sizeof(t_list));
	if (!str)
		return (NULL);
	str->content = content;
	str->next = NULL;
	return (str);
}
// int	main(void)
// {
// 	int		value;
// 	t_list	*str;

// 	value = 42;
// 	str = ft_lstnew(&value);
// 	if (!str)
// 		return (1);
// 	printf("content = %d\n", *(int *)str->content);
// 	printf("next = %p\n", (int *)str->next);
// 	free(str);
// 	return (0);
// }
