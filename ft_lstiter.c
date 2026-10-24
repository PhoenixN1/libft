/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:06:03 by momellou          #+#    #+#             */
/*   Updated: 2026/10/24 14:36:24 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// void print_content(void *content)
// {
//     printf("%s\n", (char *)content);
// }

// int main(void)
// {
//     t_list *lst;

//     lst = ft_lstnew(ft_strdup("A"));
//     if (!lst)
//         return (1);
//     lst->next = ft_lstnew(ft_strdup("B"));
//     if (!lst->next)
//         return (1);
//     lst->next->next = ft_lstnew(ft_strdup("C"));
//     if (!lst->next->next)
//         return (1);
//     ft_lstiter(lst, print_content);
//     return (0);
// }