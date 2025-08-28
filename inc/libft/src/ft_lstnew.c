/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:15:03 by cfilacch          #+#    #+#             */
/*   Updated: 2025/08/28 16:15:03 by cfilacch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new node (ptr).
 * The variable ’content’ (in t_list) is initialized with the value of ’content’
 * The variable ’next’ is initialized to NULL.
 *
 * @param content The content to create the node with.
 * @return t_list* The new node.
 */
t_list	*ft_lstnew(int content)
{
	t_list	*result;

	result = (t_list *)malloc(sizeof(t_list));
	if (!result)
		return (0);
	if (content == 0)
	{
		result->content = 0;
		result->next = 0;
	}
	else
	{
		result->content = content;
		result->next = 0;
	}
	return (result);
}

// int	main(void)
// {
// 	t_list	*b;
// 	b = ft_lstnew("hello");
// 	printf("%s\n", (char *)(b -> content));
// }
