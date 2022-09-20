/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:16:14 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/19 18:08:37 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/**
 * @brief Shift up all elements of stack a by 1
 *        First element becomes the last one.
 *        So created a new node and later 
 *        added at the end to perform the
 *        operation. We can try otherways too.
 * 
 * @param stack_a 
 */
void	ft_ra(t_list **stack_a)
{
	t_list		*tmp;

	tmp = NULL;
	if (!*stack)
		return ;
	tmp = ft_new_node((*stack_a)->input);
	ft_back_add(stack_a, tmp);
	tmp = *stack_a;
	*stack = (*stack_a)->next;
	free (tmp);
	tmp = NULL;
	write (1, "ra\n", 3);
}

void	ft_rb(t_list **stack_b)
{
	t_list	*tmp;

	tmp = NULL;
	if (!*stack_b)
		return ;
	tmp = ft_new_node((*stack_b)->input);
	ft_back_add(stack_b, tmp);
	tmp = *stack_b;
	*stack = (*stack_b)->next;
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
void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	ft_ra(stack_a);
	printf("%d", stack_a->data)
	ft_rb(stack_b);
	write (1, "rr\n", 3);
}

void	print_list(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (!tmp)
		printf("%d", tmp->input);
	tmp = tmp->next;
}


