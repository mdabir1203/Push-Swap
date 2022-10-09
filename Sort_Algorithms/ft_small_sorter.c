/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sorter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 05:49:21 by mabbas            #+#    #+#             */
/*   Updated: 2022/10/09 01:32:06 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_push_a(t_stack **stack_a, t_stack **stack_b)
{
	while (*stack_b != NULL)
		ft_pa(stack_a, stack_b);
}

/**
 * @brief Sorts 3 elements in stack_a. 
 *        Cases are:
 *        1. [5,4,1]	-->	sa	-->	[4,5,1]	-->	rra	-->	[1,4,5]
 *		  2. [3,1,2]	-->	ra	-->	[1,2,3].
 *		  3. [1,3,2]	-->	sa	-->	[3,1,2]	-->	ra	-->	[1,2,3].
 *		  4. [2,3,1]		rra	-->	[1,2,3].
 * 
 * @param stack_a 
 */
void	ft_tri_sort(t_stack **stack_a)
{	
	int			top;
	int			mid;
	int			bottom;

	if ((*stack_a) && (*stack_a)->next == NULL)
		return ;
	top = (*stack_a)->val;
	mid = (*stack_a)->next->val;
	bottom = (*stack_a)->next->next->val;
	if ((top > mid) && (top < bottom) && (mid < bottom))
		ft_sa(stack_a);
	else if ((top > mid) && (top > bottom) && (mid > bottom))
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if ((top > mid) && (top > bottom) && (mid < bottom))
		ft_ra(stack_a);
	else if ((top < mid) && (top < bottom) && (mid > bottom))
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	else if ((top < mid) && (top > bottom) && (mid > bottom))
		ft_rra(stack_a);
}

/**
 * @brief Finding the min no in stack a and push to b
 *        started from the bottom of stack to make it 
 * 
 * @param stack_a 
 * @param stack_b 
 */
void	ft_sort_stack_b(t_stack **stack_a, t_stack **stack_b)
{
	int		size;
	int		min;
	int		mid;
	int		ind;

	size = ft_lst_size(*stack_a);
	while (size > 3)
	{
		min = ft_min(*stack_a);
		mid = ft_mid(size);
		ind = ft_node_find(*stack_a, min);
		while (ind != 1)
		{
			if (ind <= mid)
				ft_ra(stack_a);
			else if (ind > mid)
				ft_rra(stack_a);
			if (ft_sorted_stack(*stack_a) == true)
				return ;
			ind = ft_node_find(*stack_a, min);
		}
		ft_pb(stack_a, stack_b);
		size--;
	}
}

void	ft_sort_small(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_lst_size(*stack_a);
	if ((ft_sorted_stack(*stack_a)) == true)
		return ;
	if (size == 2)
	{
		ft_sa(stack_a);
		return ;
	}
	ft_sort_stack_b(stack_a, stack_b);
	if (ft_sorted_stack(*stack_a) == false)
		ft_tri_sort(stack_a);
	ft_push_a(stack_a, stack_b);
}
