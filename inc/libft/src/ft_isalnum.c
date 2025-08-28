/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:15:02 by cfilacch          #+#    #+#             */
/*   Updated: 2025/08/28 16:15:02 by cfilacch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/libft.h"

/**
 * @brief 	Function checks if 'c' is a alphanumeric character (0-9 & a-z & A-Z).
 * @param c Parameter that gets checked.
 * @return 	int 1 if parameter is alphanumeric or 0 if not
 */
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
