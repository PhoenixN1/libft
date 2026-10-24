/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:05:59 by momellou          #+#    #+#             */
/*   Updated: 2026/10/24 14:34:20 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// void del(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *node;

//     node = ft_lstnew(ft_strdup("Hello"));
//     if (!node)
//         return (1);
//     ft_lstdelone(node, del);
//     printf("Node deleted\n");
//     return (0);
// }