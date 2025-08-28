/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:15:02 by cfilacch          #+#    #+#             */
/*   Updated: 2025/08/28 16:15:02 by cfilacch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/libft.h"

/**
 * @brief function checks if 'val' is a alphabetic character (a-z & A-Z)
 * 
 * @param c parameter that gets checked
 * @return returns int 1 if parameter is alphanumeric or 0 if not.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
