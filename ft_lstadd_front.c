/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:05:54 by momellou          #+#    #+#             */
/*   Updated: 2026/10/24 14:32:22 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main(void)
// {
//     t_list *lst;
//     t_list *new;

//     lst = ft_lstnew(ft_strdup("B"));
//     new = ft_lstnew(ft_strdup("A"));
//     if (!lst || !new)
//         return (1);
//     ft_lstadd_front(&lst, new);
//     while (lst)
//     {
//         printf("%s\n", (char *)lst->content);
//         lst = lst->next;
//     }
//     return (0);
// }