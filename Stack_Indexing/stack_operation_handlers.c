/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operation_handlers.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:36:26 by mabbas            #+#    #+#             */
/*   Updated: 2022/10/07 22:34:07 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"
/**
 * @file Free the last node in the Stack
 *       which means clearing the memory
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-09-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
void	ft_lst_del_end(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	tmp->next->val = 0;
	free (tmp->next);
	tmp->next = NULL;
}

/**
 * @brief Free all the allocated memory of stack
 * 
 * @param stack 
 */
void	ft_del_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack != NULL)
	{
		tmp = (*stack)->next;
		//free(stack);
		*stack = tmp;
	}
	*stack = NULL;
}
