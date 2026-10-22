/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:05:54 by momellou          #+#    #+#             */
/*   Updated: 2026/10/22 15:34:36 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main(void)
// {
//     t_list  *lst;
//     t_list  *new;
//     int     a = 10;
//     int     b = 20;
//     int     c = 30;

//     lst = NULL;

//     new = malloc(sizeof(t_list));
//     if (!new)
//         return (1);
//     new->content = &a;
//     ft_lstadd_front(&lst, new);

//     new = malloc(sizeof(t_list));
//     if (!new)
//         return (1);
//     new->content = &b;
//     ft_lstadd_front(&lst, new);

//     new = malloc(sizeof(t_list));
//     if (!new)
//         return (1);
//     new->content = &c;
//     ft_lstadd_front(&lst, new);

//     while (lst)
//     {
//         printf("%d\n", *(int *)lst->content);
//         lst = lst->next;
//     }
//     return (0);
// }