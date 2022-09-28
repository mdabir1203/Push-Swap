/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limiters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 02:04:44 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/28 04:50:56 by mabbas           ###   ########.fr       */
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

	min = stack->input;
	while (stack != NULL)
	{
		if (stack->input < min)
			min = stack->input;
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

	max = stack->input;
	while (stack != NULL)
	{
		if (stack->input > max)
			max = stack->input;
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
	if (stack->input != max)
		next_max = stack->input;
	else
	{
		next_max = stack->next->input;
		stack = stack->next;
	}
	while (stack != NULL)
	{
		if (stack->input > next_max && stack->input < max)
			next_max = stack->input;
		stack = stack->next;
	}
	return (next_max);
}
