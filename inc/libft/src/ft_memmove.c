/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:15:03 by cfilacch          #+#    #+#             */
/*   Updated: 2025/08/28 16:15:03 by cfilacch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/libft.h"

/**
 * @brief   Function copies n characters from the object pointed to by 'src' 
 * into the object pointed to by 'dest'.
 * Does not check the validity of the destination buffer.
 * copies the data first to an intermediate buffer, then from the 
 * buffer to destination.
 * -> similar to memcpy but better
 * One of 'dest' or 'src' can be NULL but not both!
 * @param dest - Destiny array.
 * @param src - Source from which array get copied.
 * @param n Up to how many characters get copied.
 * @return dest*
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src1[] = "lorem ipsum dolor sit amet";
// 	char	*str1;
// 	size_t	len1 = 8;
// 	str1 = src1 + 1;
// 	str2 = src2 + 1;
// 	ft_memmove(src1, str1, len1);
// 	printf ("my version      -> %s\n", src1);
// 	printf ("example         -> %s\n", src2);
// }
