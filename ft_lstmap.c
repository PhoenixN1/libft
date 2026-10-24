/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:06:09 by momellou          #+#    #+#             */
/*   Updated: 2026/10/24 14:25:42 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
// void *copy_content(void *content)
// {
//     return (strdup((char *)content));
// }

// void del(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *lst;
//     t_list *copy;
//     t_list *current;

//     lst = ft_lstnew(strdup("A"));
//     if (!lst)
//         return (1);
//     lst->next = ft_lstnew(strdup("B"));
//     if (!lst->next)
//         return (1);
//     copy = ft_lstmap(lst, copy_content, del);
//     current = copy;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     ft_lstclear(&lst, del);
//     ft_lstclear(&copy, del);
//     return (0);
// }