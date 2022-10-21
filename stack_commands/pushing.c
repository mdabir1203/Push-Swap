/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:20:50 by mabbas            #+#    #+#             */
/*   Updated: 2022/10/21 19:00:25 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"












/**
 * @brief Taking the First element at the top of b and put it at 
 *        top of a. Do nothing if b is empty.
 * 
 * @param stack_a 
 * @param stack_b 
 */

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first_elem;
	t_stack	*prev_elem;

	first_elem = *stack_b;
	prev_elem = *stack_a;
	if (!*stack_b)
		return ;
	// temp = ft_new_node((*stack_b)->val);
	// ft_front_add(stack_a, temp);
	*stack_b = (*stack_b)->next;
	*stack_a = first_elem;
	(*stack_a)->next = prev_elem;
	// //free(temp);
	// temp = NULL;
	write (1, "pa\n", 3);
}

/**
 * @brief Take the first element at top of a and put it at top of b.
 *        Do nothing if stack_a is empty.
 * 
 * @param stack_a 
 * @param stack_b 
 */
void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first_elem;
	t_stack	*prev_elem;

	first_elem = *stack_a;
	prev_elem = *stack_b;
	if (!*stack_a)
		return ;
	// temp = ft_new_node((*stack_b)->val);
	// ft_front_add(stack_a, temp);
	*stack_a = (*stack_a)->next;
	*stack_b = first_elem;
	(*stack_b)->next = prev_elem;
	write (1, "pb\n", 3);
}
