/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:15:04 by cfilacch          #+#    #+#             */
/*   Updated: 2025/08/28 16:15:04 by cfilacch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Converts uppercase character to lowercase.
 * @param c Character that gets converted.
 * @return Returns int value of ASCII character in lowercase or 'c' if
 * character is already lowercase.
 */
int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	char	y;
// 	y = 'A';
// 	printf("%c\n", ft_tolower(y));
// }
