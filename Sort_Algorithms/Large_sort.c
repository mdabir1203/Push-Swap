/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:06:24 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/28 04:57:14 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

/**
 * @brief Find "Value/Nbr in Stack A and push it to stack B"
 *        To push them we do:
 * 		  1. calculation of stack A size
 *        2. Find middle of stack on stack size
 *        3. Find node pos in the stack
 *        4. Comparing against the middle
 *           if pos <= mid -> rotate to the top( 3 5 9 -> if mid 5 
 *            then 3 is send to the top)
 *           if pos <= mid -> rotate to the bottom
 *        When element reaches pos 0 , push them to the stack B 
 * 
 * @param stack_a 
 * @param stack_b 
 * @param val 
 */
void	ft_element_push_b(t_stack **stack_a, t_stack **stack_b, int val)
{
	int	mid;
	int	pos;
	int	sz;

	sz = ft_lstsize(*stack_a);
	mid = ft_mid_fin(sz);
	pos = ft_node_find(*stack_a, val);
	while (pos != 1)
	{
		if (pos <= mid)
			ft_ra(stack_a);
		else if (pos > mid)
			ft_rra(stack_a);
		if (ft_sorted_stack(*stack_a) == true)
			return ;
		pos = ft_node_find(*stack_a, val);
	}
	ft_fb(stack_a, stack_b);
}

/**
 * @brief I pushed all elements smaller or equal
 *        to the key number we found earlier
 *        to stack_b 
 * 
 * @param stack_a 
 * @param stack_b 
 * @param key 
 */
void	ft_push_to_b(t_stack **stack_a, t_stack **stack_b, int key)
{
	t_stack	*tmp;
	int		val;
	int		min;

	tmp = *stack_a;
	while (ft_is_pushed(*stack_a, key) == false)
	{
		val = tmp->val;
		if (val <= key)
			ft_element_push_b(stack_a, stack_b, val);
		min = ft_min(*stack_b);
		if (val == min)
			ft_rb(stack_b);
		tmp = tmp->next;
		if (tmp == NULL)
			tmp = *stack_a;
	}
}

/**
 * @brief Push all sliced elements the last to stack B
 *        By using ft_slice_set identified the no of
 *        sliced parts. ( sliced )
 *        Left the last part in Stack A to push it in sorted
 *        form in the end 
 *         6 7 8 9 --> stac
 * 
 * @param stack_a 
 * @param stack_b 
 * @param st_key 
 */
void	push_slice_b(t_stack **stack_a, t_stack **stack_b, t_stack **st_key)
{
	int		move;
	int		slice;
	int		key;
	int		size;

	size = ft_lstsize(*stack_a);
	slice = ft_slice_set(size);
	move = 1;
	key = ft_stack_key(t_stack **stack_a, t_stack **stack_b, t_stack **st_key);
	push_slice_b(stack_a, st_key, parts, move);
	move++;
	if (ft_sorted_stack(*stack_a) == true)
		return ;
	while (move < slice)
	{
		key = ft_next_key(*st_key, slice, move);
		push_slice_b(stack_a, stack_b, key);
		move++;
	}
}

/**
 * @brief Algo for Medium/Big(100 or more num)
 *        1. Divide the stack in parts/slices
 *           acc to size
 *        2. Push slices to stack A, except the
 *           last one. Smaller part on
 *           ( 5 6 12 18 19 --> 5,6  ) bottom
 *            of stack B) then comes bigger| 12,18,19
 *	         then it continues.           
 *        3. Sort last part from Stack A to B
 *        4. Sort last 3 elem on Stack A ( 18 12 19)
 *        5. Sort pushed parts back from stack A to B
 *      
 * 
 * @param stack_a 
 * @param stack_b 
 */
void	ft_sort_large_elem(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*st_key;

	if (ft_sorted_stack(*stack_a) == true)
		return ;
	push_slice_b(stack_a, stack_b, &st_key);
	ft_sort_b(stack_a, stack_b);
	ft_remain_sort_tri(stack_a);
	ft_sort_slice_a(stack_a, stack_b);
	ft_del_stack(&st_key);
}
