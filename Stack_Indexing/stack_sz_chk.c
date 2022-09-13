/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sz_chk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 03:59:37 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/13 02:27:42 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * @brief Check stack sorted in ascending order 
 * 
 * @param stack 
 * @return true 
 * @return false 
 */
bool	ft_sorted_stack(t_list *stack)
{
	if (!stack->next)
		return (false);
	while (stack->next != NULL)
	{
		if (stack->input > stack->next->input)
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
 * @return true 
 * @return false 
 */
bool	ft_stack_sizer(int size)
{
	if (size <= 10)
		return (true);
	else if (size >= 11 && size <= 100)
		return (true);
	else if (size > 100)
		return (true);
	else
		return (false);
}
