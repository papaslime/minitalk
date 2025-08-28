/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:15:04 by cfilacch          #+#    #+#             */
/*   Updated: 2025/08/28 16:15:04 by cfilacch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Function determines the length of string excluding the ending
 * null character.
 * @param s Given string.
 * @return Returns size_t the length of string.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	const char s[] = "Hello World!";
// 	printf("%ld\n", ft_strlen(s));
// 	return (0);
// }
