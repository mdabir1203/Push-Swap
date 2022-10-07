/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:16:14 by mabbas            #+#    #+#             */
/*   Updated: 2022/10/07 19:51:45 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

/**
 * @brief Shift up all elements of stack a by 1
 *        First element becomes the last one.
 *        So created a new node and later 
 *        added at the end to perform the
 *        operation. We can try otherways too.
 * 
 * @param stack_a 
 */
void	ft_ra(t_stack **stack_a)
{
	t_stack		*tmp;

	tmp = NULL;
	if (!*stack_a)
		return ;
	tmp = ft_new_node((*stack_a)->val);
	ft_back_add(stack_a, tmp);
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	free(tmp);
	tmp = NULL;
	write (1, "ra\n", 3);
}

void	ft_rb(t_stack **stack_b)
{
	t_stack	*tmp;

	if (!*stack_b)
		return ;
	tmp = ft_new_node((*stack_b)->val);
	ft_back_add(stack_b, tmp);
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	free (tmp);
	tmp = NULL;
	write (1, "rb\n", 3);
}

/**
 * @brief  Combination of ra and rb instructions
 * 
 * @param stack_a 
 * @param stack_b 
 */
void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	if (!*stack_a || !*stack_b)
		return ;
	ft_ra(stack_a);
	ft_rb(stack_b);
	write (1, "rr\n", 3);
}
