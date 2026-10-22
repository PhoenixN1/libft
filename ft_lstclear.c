/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:05:57 by momellou          #+#    #+#             */
/*   Updated: 2026/10/22 21:05:56 by momellou         ###   ########.fr       */
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

// void	del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*node;
// 	int		i;
// 	int		*value;

// 	lst = NULL;
// 	i = 1;
// 	while (i <= 3)
// 	{
// 		value = malloc(sizeof(int));
// 		if (!value)
// 			return (1);
// 		*value = i * 10;
// 		node = ft_lstnew(value);
// 		if (!node)
// 		{
// 			free(value);
// 			ft_lstclear(&lst, del);
// 			return (1);
// 		}
// 		ft_lstadd_back(&lst, node);
// 		i++;
// 	}
// 	printf("Avant ft_lstclear :\n");
// 	node = lst;
// 	while (node)
// 	{
// 		printf("%d\n", *(int *)node->content);
// 		node = node->next;
// 	}
// 	ft_lstclear(&lst, del);
// 	printf("Apres ft_lstclear :\n");
// 	if (lst == NULL)
// 		printf("OK : la liste est NULL\n");
// 	else
// 		printf("KO : la liste n'est pas vide\n");
// 	return (0);
// }