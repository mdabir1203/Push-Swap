/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 01:31:29 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/29 03:44:53 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_back_add(t_stack **lst, t_stack *new)
{
	t_stack	*end;

	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	end = *lst;
	while (end->next != NULL)
		end = end->next;
	end->next = new;
}

void	ft_front_add(t_stack	**lst, t_stack	*new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

int	ft_lstsize(t_stack *lst)
{
	t_stack	*temp;
	size_t	count;

	temp = lst;
	count = 0;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
