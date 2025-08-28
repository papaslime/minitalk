/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:15:02 by cfilacch          #+#    #+#             */
/*   Updated: 2025/08/28 16:15:02 by cfilacch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/libft.h"

/**
 * @brief   Function checks if parameter passed is a digit (0 - 9).
 * @param c Parameter that gets checked
 * @return Returns int 1 if parameter is a digit or 0 if it's not.
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
