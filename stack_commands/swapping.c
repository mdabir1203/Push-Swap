/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:34:04 by mabbas            #+#    #+#             */
/*   Updated: 2022/08/25 18:20:28 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

/**
 * @brief This swaps the first 2 elements at the top of stack a
 * **	  Nothing is done when only one or no elements.
 * 
 * @param stack 
 */
void	ft_sa(t_list	**stack_a)
{
	int		tmp;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->input = (*stack_a)->next->input;
	(*stack_a)->next->input = tmp;
	if (true)
		write (1, "sa\n", 3);
}

/**
 * @brief Swapping the first 2 elements at the top of stack b
 *        Nothing is done when only one or no elements
 * 
 * @param stack_b 
 */
void	ft_sb(t_list	**stack_b)
{
	int	tmp;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = (*stack_b)->input;
	(*stack_b)->input = (*stack_b)->next->input;
	(*stack_b)->next->input = tmp;
	write (1, "sb\n", 3);
}

/**
 * @brief ss ( sa and sb at the same time)
 * 
 */

void	ft_ss(t_list	**stack_a, t_list	**stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write (1, "ss\n", 3);
}
