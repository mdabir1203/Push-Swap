/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_partition.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:46:35 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/28 04:51:15 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

/**
 * @brief Choice of slicing the stack depends on stack size.
 *        But the divisors were chosen trying out different 
 *        values. It has a pattern of 12.5 which is an 
 *        empirical value. For bigger stacks which is normally 
 *        more than 100 numbers it was tried with experiments.
 * 
 * @param size 
 * @return int 
 */
int	ft_slice_set(int size)
{
	float	slice;
	int		tmp_sz;

	slice = 0;
	tmp_sz = ft_stack_sizer(size);
	if (tmp_sz == 2)
	{
		if (size <= 25)
			slice = 2;
		else if (size <= 50)
			slice = 4;
		else if (size <= 75)
			slice = 5;
		else if (size <= 100)
			slice = 5.2;
	}
	else if (tmp_sz == 3)
		slice = 14;
	return (slice);
}
