/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:06:24 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/19 21:52:19 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

-->>>https://www.educative.io/answers/how-to-sort-a-linked-list-using-merge-sort

t_list	*ft_mergeSorted(t_list *stack_a, t_list *stack_b)
{
	t_list	*result;

	result = NULL;
	// Base case
	if (stack_a == NULL)
		return (stack_a);
	else if (stack_b == NULL)
		return (stack_b);
	// Merging recursively
	if (stack_a->input <= stack_b->input)
	{
		result = stack_a;
		result->next = ft_mergeSorted(stack_a->next, stack_b);
	}
	else
	{
		result = stack_b;
		result->next = ft_mergeSorted(stack_a, stack_b->next);
	}
	return (result);
}

/**
 * @brief Split the stack into two halves using ref param
 *        If length odd , extra node in front list
 *        Using fast/slow pointer method
 * @param stack 
 * @param stack_a 
 * @param stack_b 
 */
void	ft_split_stack(t_list *stack, t_list **stack_a, t_list **stack_b)
{
	t_list	pos_front;
	t_list	pos_back;

	if (stack == NULL || stack->next == NULL)
	{
		*stack_a = stack;
		*stack_b = NULL;
	}
	pos_front = stack;
	pos_back = stack->next;
	while (pos_front != NULL)
	{
		pos_front = pos_front->next;
		if (pos_front != NULL)
		{
			pos_back = pos_back->next;
			pos_front = pos_front->next;
		}
		*stack_a = stack;
		*stack_b = pos_back->next;
		pos_back = NULL;
	}
}

void	ft_mergesort(t_list **stack, t_list **stack_a, t_list **stack_b)
{
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	ft_split_stack(*stack, &stack_a, &stack_b);
	ft_mergesort(&stack_a);
	ft_mergesort(&stack_b);
	*stack = ft_mergesort(stack_a, stack_b);
}

int main (int argc, char **argv)
{
	t_list	stack;
	size_t sz_lst;

	argc = 0;
	stack.stack_a = ft_calloc(1, sizeof(t_stack));
	stack.stack_b = NULL;
	
	ft_lstnew()
}
