/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error_handlers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:34:37 by mabbas            #+#    #+#             */
/*   Updated: 2022/10/08 20:45:29 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

/**
 * @brief Error Flag is taken as arg
 *        If flag true input valid ->
 *        display error msg and used
 *        macro for return value.
 * @param error 
 */
void	ft_error_msg(bool error)
{
	if (error == EXIT_SUCCESS)
	{
		write(2, "Error\n", 6);
		exit (EXIT_FAILURE);
	}
}

/**
 * @brief Checking if the calculated atoi is in tolerant 
 *        range of int type. If out of range error 
 *        flag is set true by EXIT_FAILURE.
 * 
 * @param res 
 * @param error 
 */

void	ft_range_num_chk(int res, bool *error)
{
	if ((res < INT_MIN) || (res > INT_MAX))
	{
		*error = EXIT_FAILURE;
		ft_error_msg(error);
	}
}

void	ft_check_valid_input(char *str, bool *error)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(str) > 11)
		*error = EXIT_FAILURE;
	if (str[0] == '\0')
		*error = EXIT_FAILURE;
	if (str[i] == '-')
		i++;
	if (str[i] == '-' && str[j] == '\0')
		*error = EXIT_FAILURE;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i] == false))
			*error = EXIT_FAILURE;
		i++;
	}
	ft_error_msg(error);
}

/**
 * @brief Finds if there is duplicate and print error 
 *        msg accordingly.
 * 
 * @param stack 
 * @return true 
 * @return false 
 */
int	ft_found_duplicate(t_stack *stack)
{
	t_stack	*cur_pos;
	t_stack	*next_node;

	cur_pos = stack;
	next_node = cur_pos;
	while (cur_pos != NULL)
	{
		while (next_node->next != NULL)
		{
			next_node = next_node->next;
			if (cur_pos->val == next_node->val)
				return (EXIT_FAILURE);
		}
		next_node = cur_pos->next;
		cur_pos = cur_pos->next;
	}
	return (EXIT_SUCCESS);
}
