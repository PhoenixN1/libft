/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:05:50 by momellou          #+#    #+#             */
/*   Updated: 2026/10/24 14:31:14 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*start;

	if (!lst || !new)
		return ;
	start = *lst;
	if (*lst)
	{
		while (start->next != NULL)
			start = start->next;
		start->next = new;
	}
	else
		*lst = new;
}
// int main(void)
// {
//     t_list *lst;
//     t_list *new;
//     t_list *current;

//     lst = ft_lstnew(ft_strdup("A"));
//     new = ft_lstnew(ft_strdup("B"));
//     if (!lst || !new)
//         return (1);
//     ft_lstadd_back(&lst, new);
//     current = lst;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     return (0);
// }