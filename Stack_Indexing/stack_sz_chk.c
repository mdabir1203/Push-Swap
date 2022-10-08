/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sz_chk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 03:59:37 by mabbas            #+#    #+#             */
/*   Updated: 2022/10/08 20:53:24 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

/**
 * @brief Check stack sorted in ascending order 
 * 
 * @param stack 
 * @return true 
 * @return false 
 */
bool	ft_sorted_stack(t_stack *stack)
{
	if (!stack->next)
		return (false);
	while (stack->next != NULL)
	{
		if (stack->val > stack->next->val)
			return (false);
		stack = stack->next;
	}	
	return (true);
}

/**
 * @brief Returns true based on the stack size which 
 *        is amount of input numbers.
 * 
 * @param size 
 * @return 
 * @return returns the size number for large and small sort 
 */
int	ft_stack_sizer(int size)
{
	if (size <= 10)
		return (ft_stack_small(size));
	else if (size >= 11 && size <= 100)
		return (2);
	else if (size > 100)
		return (3);
	else
		return (0);
}

bool	ft_stack_small(int size)
{
	if (size <= 10)
		return (true);
	return (false);
}

bool	ft_stack_medium(int size)
{
	if (size >= 11 && size <= 100)
		return (true);
	return (false);
}

bool	ft_stack_big(int size)
{
	if (size > 100)
		return (true);
	return (false);
}
