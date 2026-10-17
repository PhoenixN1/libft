/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momellou <momellou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:31:14 by momellou          #+#    #+#             */
/*   Updated: 2026/10/17 11:53:28 by momellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd) // fd : File Descriptor 0 : 
{
	write(fd, &c, 1);
}
// int main(void)
// {
//     ft_putchar_fd('A', 0);
//     ft_putchar_fd('\n', 1);
//     ft_putchar_fd('B', 2);
//     return (0);
// }