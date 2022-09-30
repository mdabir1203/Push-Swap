/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:20:50 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/29 12:22:05 by mabbas           ###   ########.fr       */
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
	t_stack	*tmp;

	if (!*stack_b)
		return ;
	tmp = ft_new_node((*stack_b)->input);
	ft_front_add(stack_a, tmp);
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	free (tmp);
	tmp = NULL;
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
	int		tmp;

	if (!*stack_a)
		return ;
	tmp = ft_new_node((*stack_a)->input);
	ft_front_add(stack_b, tmp);
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	free (tmp);
	tmp = NULL;
	write (1, "pb\n", 3);
}
