/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:05:57 by momellou          #+#    #+#             */
/*   Updated: 2026/10/24 14:33:23 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*start;
	t_list	*temp;

	if (!lst || !del)
		return ;
	start = *lst;
	while (start)
	{
		temp = start;
		start = start->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}

// void del(void *content)
// {
//     free(content);
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
//     ft_lstclear(&lst, del);
//     printf("lst: %p\n", (void *)lst);
//     return (0);
// }