/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:15:03 by cfilacch          #+#    #+#             */
/*   Updated: 2025/08/28 16:15:03 by cfilacch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/libft.h"

/**
 * @brief Outputs the character "c" to the given file descriptor.
 * 
 * @param c Character
 * @param fd File descriptor
 */
void	ft_putchar_fd(char c, int fd)
{
	if (c || fd >= 0)
		write(fd, &c, 1);
}

// int main ()
// {
// 	int	i;
// 	i = 0;
// 	char	str[] = "Hello world!";
// 	while (str[i] != '\0')		
// 		ft_putchar_fd(str[i++], 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }
