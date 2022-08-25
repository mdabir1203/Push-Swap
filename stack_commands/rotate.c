/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:16:14 by mabbas            #+#    #+#             */
/*   Updated: 2022/08/22 21:20:41 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	insert(t_plst **head, t_plst *node)
{
	t_plst	**current;

	current = head;
	while (*current && (*curr)->data < node->data)
	{
		current = &((*current)->next);
	}
	node->next = *current;
	*current = node;
}

void	print_list(t_plst *head)
{
	while (head)
	{
		printf("(%d)->", head->data);
		head = head->next;
	}
	printf("NULL\n");
}


int main()
{
	
}