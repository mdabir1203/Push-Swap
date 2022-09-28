/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:27:52 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/28 04:56:48 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_rra(t_stack **stack)
{
	t_stack	*end;

	end = *stack;
	while (end->next != NULL)
		end = end->next;
	end = ft_new_node(end->val);
	ft_lstadd_front(stack, end);
	ft_lst_del_end(stack);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **stack)
{
	t_stack	*end;

	end = *stack;
	while (end->next != NULL)
		end = end->next;
	end = ft_new_node(end->input);
	ft_lstadd_front(stack, last);
	ft_lst_del_end(stack);
	write(1, "rrb\n",4);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
	write(1, "rrr\n", 4);
}
