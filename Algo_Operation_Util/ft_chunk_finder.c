/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunk_finder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 02:38:03 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/20 03:41:05 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * @brief Creating a stack of same elements as in stack a.
 *        Copy the numbers from a to b by libft lst fnc.
 * 
 * @param stack_a 
 * @return t_list* 
 */
static t_list	*ft_copy_stack(t_list *stack_a)
{
	t_list	*stack_key;
	t_list	*temp_stack;

	stack_key = NULL;
	while (stack_a != NULL)
	{
		temp_stack = ft_new_node(stack_a->input);
		ft_lstadd_back(&stack_key, temp_stack);
		stack_a = stack_a->next;
	}
	return (stack_key);
}

/**
 * @brief We bubble sort the stack. We do it although its O(n^2)
 *        We actually swap the nodes here not the data itself
 *        for accurate results.
 * 
 * @param stack_key 
 */
static void	ft_sort_stack_key(t_list **stack_key)
{
	struct t_stack	*stack_node;
	int				ind;
	int				lst_len;
	int				temp;

	ind = 0;
	stack_node = *stack_key;
	lst_len = ft_lstsize(*stack_key) - 1;
	while (lst_len > 0)
	{
		while (i < len)
		{
			if (stack_node->input > stack_node->next->input)
			{
				temp = stack_node->input;
				stack_node->input = stack_node->next->input;
				stack_node->next->input = temp; 
			}
			stack_node = stack_node->next->next;	
			i++;
		}
		i = 0;
		stack_node = *stack_key;
		lst_len--;
	}
}


/**
 * @brief We partition the stack_key in no of chunks
 *        depending on stack size.
 *        Then we find the first pos of the key no
 *        Here key means the max element of the first
 *        chunk.
 * 
 * @param stack_key 
 * @param parts 
 * @param move 
 * @return int 
 */
int	ft_next_key_finder(t_stacks *stack_key, int parts, int move)
{
	int	ind;
	int size;
	int key;

	size = ft_lstsize(stack_key);
	ind = size / parts;
	ind *= move;
	key = ft_pos_(stack_key, ind);
	return (key);
}

/**
 * @brief By combining the prev 3 func we get the Key num.
 * 
 * @param stack_a 
 * @param stack_key 
 * @param parts 
 * @param move 
 * @return int 
 */
int	ft_key(t_stacks **stack_a, t_stacks **stack_key, int parts, int move)
{
	int	key;

	*stack_key = ft_copy_stack(*stack_a);
	ft_sort_stack_key(stack_key);
	stack_key = ft_find_next_key_finder(*stack_key, parts, move);
	return (stack_key);
}
