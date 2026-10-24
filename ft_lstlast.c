/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:06:06 by momellou          #+#    #+#             */
/*   Updated: 2026/10/24 14:36:44 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
// int main(void)
// {
//     t_list *lst;
//     t_list *last;

//     lst = ft_lstnew(ft_strdup("A"));
//     if (!lst)
//         return (1);
//     lst->next = ft_lstnew(ft_strdup("B"));
//     if (!lst->next)
//         return (1);
//     lst->next->next = ft_lstnew(ft_strdup("C"));
//     if (!lst->next->next)
//         return (1);
//     last = ft_lstlast(lst);
//     if (last)
//         printf("Last: %s\n", (char *)last->content);
//     return (0);
// }