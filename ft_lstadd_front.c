/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:05:54 by momellou          #+#    #+#             */
/*   Updated: 2026/10/21 21:31:44 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*node_a;
// 	t_list	*node_x;

// 	lst = NULL;
// 	node_a = ft_lstnew("A");
// 	node_x = ft_lstnew("X");
// 	if (node_a == 0 || node_x == 0)
// 	{
// 		free(node_a);
// 		free(node_x);
// 		return (1);
// 	}
// 	lst = node_a;
// 	ft_lstadd_front(&lst, node_x);
// 	printf("Premier element : %s\n", (char *)lst->content);
// 	printf("Deuxieme element : %s\n", (char *)lst->next->content);
// 	free(node_x);
// 	free(node_a);
// 	return (0);
// }