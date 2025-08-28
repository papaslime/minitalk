/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfilacch <cfilacch@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:15:03 by cfilacch          #+#    #+#             */
/*   Updated: 2025/08/28 16:15:03 by cfilacch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/libft.h"

/**
 * @brief Counts the number of nodes in a list.
 * 
 * @param lst The beginning of the list. 
 * @return int The length of the list
 */
int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	if (!lst)
		return (0);
	i = 1;
	tmp = lst->next;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

// int main()
// {
// 	t_list *val = NULL;
// 	int i = 0;
// 	i = ft_lstsize(val);
// 	printf("i: %d\n", i);
// }
