/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limiters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 02:04:44 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/29 12:31:33 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

/**
 * @brief Finding the smallest element in stack
 * 
 * @param stack 
 * @return int 
 */
int	ft_min(t_stack	*stack)
{
	int	min;

	min = stack->val;
	while (stack != NULL)
	{
		if (stack->val < min)
			min = stack->val;
		stack = stack->next;
	}
	return (min);
}

/// @brief Find the biggest element in stack
/// @param stack 
/// @return 
int	ft_max(t_stack *stack)
{
	int	max;

	max = stack->val;
	while (stack != NULL)
	{
		if (stack->val > max)
			max = stack->val;
		stack = stack->next;
	}
	return (max);
}

/**
 * @brief Find the next biggest element in stack
 * 
 * @param stack 
 * @param max 
 * @return int 
 */
int	ft_next_max(t_stack *stack, int max)
{
	int	next_max;

	if (!stack->next)
		return (EXIT_SUCCESS);
	if (stack->val != max)
		next_max = stack->val;
	else
	{
		next_max = stack->next->val;
		stack = stack->next;
	}
	while (stack != NULL)
	{
		if (stack->val > next_max && stack->val < max)
			next_max = stack->val;
		stack = stack->next;
	}
	return (next_max);
}

/**
 * @brief Find middle of the stack. 
 *        Mid is chosen closer to the
 *        beginning 
 * 
 * @param size 
 * @return int 
 */
int	ft_mid(int size)
{
	int	mid;

	if (size % 2 == 0)
		mid = (size / 2) + 1;
	else
		mid = (size / 2);
	return (mid);
}
