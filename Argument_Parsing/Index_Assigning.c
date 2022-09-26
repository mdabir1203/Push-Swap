/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Index_Assigning.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:40:09 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/26 09:36:38 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"
#include "../libft/libft.h"


void	help_ind_utils(t_stack	*inptr, int *val,int  *max_ind)
{
		//val = INT_MIN;
		//max_ind = NULL;
		if (inptr->val == INT_MIN && inptr->index == 0)
				inptr->index = 1;
		if (&inptr->val >  val && inptr->index == 0)
		{
				val = &inptr->val;
				max_ind = (int *) inptr;
				//inptr = stack_a;
		}
		else
			inptr = inptr->next;
}

void	*index_assign(t_stack *stack_a, int sz_stack)
{
	t_stack	*inptr;
	t_stack	*max_ind;
	int		val;

	while (--sz_stack > 0)
	{
		inptr = stack_a;
		val = INT_MIN;
		max_ind = NULL;

		while (inptr)
		{
			// if (inptr->val == INT_MIN && inptr->index == 0)
			// 	inptr->index = 1;
			// if (inptr->val > val && inptr->index == 0)
			// {
			// 	val = inptr->val;
			// 	max_ind = inptr;
			// 	inptr = stack_a;
			// }
			help_ind_utils(inptr, &val, (int *)max_ind);
		}
		if (max_ind != NULL)
			max_ind->index = sz_stack;
	}
	return (stack_a);
}

void	print_list(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->val, 1);
		write(1, " ", 1);
		ft_putnbr_fd(tmp->index, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}

int main()
{

	int    tmp[10]= {4,5,6,7,8,2,53,23,51,67};

	//if (!(*val->val)
	//	return (-1);
	index_assign((t_stack *) tmp, 10);
	printlist((t_stack *) tmp);

}