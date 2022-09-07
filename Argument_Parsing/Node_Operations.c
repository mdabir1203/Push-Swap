/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Node_Operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:08:13 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/07 03:18:12 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../instructions.h"

/**
 * @brief Creates new node with allocated memory. Assigns param 'val' to
 *        var input(input integers)
 *        Initializing and Next assigned to NULL.
 * 
 * @param val 
 * @return t_list* 
 */
t_list	*ft_nw_node(int val)
{
	t_list	*res;

	res = ft_calloc(sizeof(t_list));
	res->input = val;
	res->next = NULL;
	return (res);
}

/**
 * @brief Add node to beginning of stack.
 *        If list not existed, initialize it with node,
 *        So that node is the first element of stack.
 * 
 * @param lst 
 * @param new 
 */
void	ft_front_add(t_list **lst, t_list *nw_node)
{
	if (!nw_node)
		return ;
	if (!(*lst))
	{
		*lst = nw_node;
		return ;
	}
	else
	{
		nw_node->next = *lst;
		*lst = nw_node;
	}
}

/**
 * @brief Add the node to the end of the stack.
 *        If list not existed, initialize it with node,
 *        So that node is the last element of stack.
 * 
 * @param lst 
 * @param nw_node 
 */
void	ft_back_add(t_list **lst, t_list *nw_node)
{
	t_list	*temp;

	if (!nw_node)
		return ;
	if (!(*lst))
	{
		*lst = nw_node;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = nw_node;
}

/**
 * @brief Freeing the memory of the node(deleting the last node).
 * 
 * @param stack 
 */
void	ft_del_node(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	while (temp->next->next != NULL)
		temp = temp->next;
	temp->next->input = 0;
	free(temp->next);
	temp->next = NULL;
}

/**
 * @brief Freeing the allocated memory of stack
 * 
 */
void	ft_del_stack(t_list **stack)
{
	t_list	*temp;

	if ((!stack) || (!(*stack))
		return ;
	while (*stack != NULL)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
	*stack = NULL;
}

