/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:15:02 by cfilacch          #+#    #+#             */
/*   Updated: 2025/08/28 16:15:02 by cfilacch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/libft.h"

/**
 * @brief	function erases the data in the n bytes of the memory
       		starting at the location pointed to by 's', by writing zeros 
			(bytes containing '\0') to that area.
 * @param s space in memory that gets sized to null
 * @param n lengh we want to str gets nulled
 */
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*tem;

	i = 0;
	tem = (unsigned char *) s;
	while (n > i)
	{
		tem[i] = 0;
		i++;
	}
	s = tem;
}

// int	main(void)
// {
// 	unsigned char	str[]="1234567890";
// 	ft_bzero(str, 10);
// 	printf ("src: %s!\n",src);
// 	return 0;
// }
