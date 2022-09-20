/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-5sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 05:49:21 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/19 21:44:29 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_a(t_list **stack_a, t_list **stack_b)
{
	while (*stack_b != NULL)
		ft_pa(stack_a, stack_b);
}

void	ft_two_sort(t_list **stack_a)
{
	if ((*stack_a)->input > (*stack_a)->next->input)
		ft_sa(stack_a);
}

/**
 * @brief Sorts 3 elements in stack_a. 
 *        Cases are:
 *        1. [5,4,1]	->	sa	->	[4,5,1]	->	rra	->	[1,4,5]
 *		  2. [3,1,2]	->	ra	->	[1,2,3].
 *		  3. [1,3,2]	->	sa	->	[3,1,2]	->	ra	->	[1,2,3].
 *		  4. [2,3,1]	->	rra	->	[1,2,3].
 * 
 * @param stack_a 
 */
void	ft_tri_sort(t_list **stack_a)
{
	t_stack		*mid;
	int			bottom;
	int			top;
	int			mid;

	mid_stack = (*stack_a)->next;
	top = (*stack_a)->input;
	mid = stack_mid->input;
	bottom = stack_mid->next->input;
	if (top > mid && bottom > top)
		ft_sa(stack_a);
	else if (top > mid && mid > bottom)
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if (bottom > mid && top > bottom)
		ft_ra(stack_a);
	else if (mid > bottom && bottom > top)
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	else if (mid > top && top > bottom)
		ft_rra(stack_a);
}

/**
 * @brief Finding the min no in stack a and push to b
 *        started from the bottom of stack to make it 
 * 
 * @param stack_a 
 * @param stack_b 
 */
void	ft_sort_stack_b(t_list **stack_a, t_list **stack_b)
{
	int		size;
	int		min;
	int		mid;
	int		ind;

	size = ft_lstsize(*stack_a);
	while (size > 3)
	{
		min = ft_min_finder(*stack_a);
		mid = ft_mid_finder(size);
		ind = ft_node_finder(*stack_a min);
		while (ind != 1)
		{
			if (ind <= mid)
				ft_ra(stack_a);
			else if (ind > mid)
				ft_rra(stack_a);
			if (ft_sorted_stack(*stack_a) == true)
				return ;
			ind = ft_node_finder(*stack_a, min);
		}
		ft_pb(stack_a, stack_b);
		size--;
	}
}
