/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 22:30:38 by mabbas            #+#    #+#             */
/*   Updated: 2022/08/25 17:35:18 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"instructions.h"

/**
 * @brief This prints my Stack a and Stack b. Used the printf
 *  	  to print the stacks. 
 * 
 * @param a 
 * @param b 
 * @param line 
 */
void	print_no_list(t_plist *a, t_plist *b, char *line)
{
	t_plist	*temp;

	temp = a;
	ft_printf("%s\na: ", line);
	while (temp != NULL)
	{
		ft_printf("%d, ", temp->nbr);
		temp = temp->next;
	}
	temp = b;
	ft_printf("\nb :");
	while (temp != NULL)
	{
		ft_printf("%d, ", temp->nbr);
		temp = temp->next;
	}
	ft_printf("\n");
}

/**
 * @brief This defines the pushing of variables from the stack which
 * 		  is based on last in first out principle.According to the subject
 *        it is pa and pb.
 * 
 */
void	ppush(t_plst **src, t_plst **dst, t_plst **lastpos)
{
	t_plst	*temp;

	if (!(*src))
		return ;
	temp = *src;
	*src = (*src)->nxt;
	if (*src)
		(*src)->prev = NULL;
	if (*to)
		(*to)->prev = temp;
	else
		*lastpos = temp;
	temp->next = *dst;
	*dst = temp;
	(*dst)->prev = NULL;
}

/**
 * @brief It is the swap function similar to sa and sb which swaps
 *        two elements in the stack.
 * 
 * @param head 
 */
void	sswap(t_plst **head)
{
	t_plst	*temp;

	if (!*head || (*head)->next == NULL)
		return ;
	temp = *head;
	*head = (*head)->next;
	temp->next = (*head)->next;
	(*head)->next = temp;
	(*head)->prev = NULL;
}

/**
 * @brief This function denotes the rotation of values by 
 *        1 in the stacks which is similar to ra and rb.
 * 
 * @param head 
 * @param last_pos 
 */
void	rrotate(t_plst **head, t_plst	**last_pos)
{
	t_plst	*temp;

	if (!(*head) || !((*head)->next))
		return ;
	temp = *head;
	*head = (*head)->next;
	temp->next = (*head)->next;
	(*head)->prev = NULL;
	*last_pos = (*last_pos)->next;
	(*last_pos)->next = NULL;
}

/**
 * @brief This is similar to reverse rotation of values by 1
 *        which is denoted by rra and rrb.
 * 
 * @param head 
 * @param last_pos 
 */
void	rrev_rotate(t_plst **head, t_plst	**last_pos)
{
	if (!(*head) || !(*last_pos) || !((*last_pos)->prev))
		return ;
	(*head)->prev = last_pos;
	(*last_pos)->next = *head;
	*head = *last_pos;
	*last_pos = (*last_pos)->prev;
	(*last_pos)->next = NULL;
	(*head)->prev = NULL;
}

 