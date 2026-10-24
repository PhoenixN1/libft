/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:06:15 by momellou          #+#    #+#             */
/*   Updated: 2026/10/24 14:25:51 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
// int main(void)
// {
//     t_list *lst;

//     lst = ft_lstnew(strdup("A"));
//     if (!lst)
//         return (1);
//     lst->next = ft_lstnew(strdup("B"));
//     if (!lst->next)
//         return (1);
//     lst->next->next = ft_lstnew(strdup("C"));
//     if (!lst->next->next)
//         return (1);
//     printf("Size: %d\n", ft_lstsize(lst));
//     return (0);
// }