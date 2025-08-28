/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:15:02 by cfilacch          #+#    #+#             */
/*   Updated: 2025/08/28 16:15:02 by cfilacch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Finds lenght of new string.
 * @param n Digit to be converted
 * @return Len of digit
 */
static int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

/**
 * @brief Allocates (with malloc(3)) and returns a string
	representing the integer received as an argument.
	Negative numbers must be handled.
 * @param n the integer to cnbonvert.
 * @return The string representing the integer.
	NULL if the allocation fails.
 */
char	*ft_itoa(int n)
{
	char			*fnl;
	int				size;
	unsigned int	nb;

	nb = n;
	size = ft_len(n) + 1;
	fnl = (char *)malloc(size * sizeof(char));
	if (!fnl)
		return (NULL);
	if (n < 0)
	{
		nb = -n;
		fnl[0] = '-';
	}
	if (n == 0)
		fnl[0] = '0';
	fnl[--size] = '\0';
	while (--size >= 0 && nb)
	{
		fnl[size] = nb % 10 + '0';
		nb /= 10;
	}
	return (fnl);
}

// int main()
// {
// 	// int num = 2147483647;
// 	int num = -2147483647;
// 	printf("Len: %d\n", ft_len(num));
// 	printf("Output: %s\n",  ft_itoa(num));
// }
