/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 01:31:29 by mabbas            #+#    #+#             */
/*   Updated: 2022/10/21 18:36:14 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

t_stack	*ft_new_node(int in_val)
{
	t_stack	*output;

	output = malloc(sizeof(t_stack));
	if (!output)
		return (NULL);
	output->val = in_val;
	output->next = NULL;
	return (output);
}

void	ft_back_add(t_stack **lst, t_stack *new)
{
	t_stack	*end;

	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	end = *lst;
	while (end->next != NULL)
		end = end->next;
	end->next = new;
}

void	ft_front_add(t_stack	**lst, t_stack	*new)
{
	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

int	ft_lst_size(t_stack *lst)
{
	t_stack	*temp;
	size_t	count;

	temp = lst;
	count = 0;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

void	ft_lst_del_end(t_stack	**stack)
{
	t_stack	*temp;

	temp = *stack;
	while (temp->next->next != NULL)
		temp = temp->next;
	temp->next->val = 0;
	free(temp->next);
	temp->next = NULL;
}
