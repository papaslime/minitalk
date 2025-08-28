/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:15:04 by cfilacch          #+#    #+#             */
/*   Updated: 2025/08/28 16:15:04 by cfilacch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Applies the function ’f’ on each character of
	the string passed as argument, passing its index
	as first argument. Each character is passed by
	address to ’f’ to be modified if necessary.
 * @param s The string on which to iterate.
 * @param f  The function to apply to each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			(*f)(i, s + i);
			i++;
		}
	}
}

// void	cipher(unsigned int i, char *str)
// {
// 	*str += 1;
// }
// int	main(void)
// {
// 	char	str1[] = "Hello world!";

// 	printf("Before encription - %s\n", str1);
// 	ft_striteri(str1, cipher);
// 	printf("Cipher - %s\n", str1);
// 	return (0);
// }
