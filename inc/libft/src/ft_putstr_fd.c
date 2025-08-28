/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:15:03 by cfilacch          #+#    #+#             */
/*   Updated: 2025/08/28 16:15:03 by cfilacch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Pass the string "s" to the given file descriptor.
 *
 * @param s String passed as parameter
 * @param fd File descriptor
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (s || fd >= 0)
		write(fd, s, ft_strlen(s));
}

// int main ()
// {
// 	char str[] = "Hello World!\n";
// 	ft_putstr_fd(str, 1);
// 	return (0);
// }
