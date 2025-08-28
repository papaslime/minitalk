/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:15:03 by cfilacch          #+#    #+#             */
/*   Updated: 2025/08/28 16:15:03 by cfilacch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ on the content
 * of each node.
 *
 * @param lst  The address of a pointer to a node.
 * @param f  The address of the function used to iterate on the list.
 */
// void	ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	t_list	*tmp;

// 	if (!lst)
// 		return ;
// 	tmp = lst;
// 	while (tmp)
// 	{
// 		f(tmp->content);
// 		tmp = tmp->next;
// 	}
// }
