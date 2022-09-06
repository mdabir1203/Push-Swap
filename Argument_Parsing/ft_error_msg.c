/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:34:37 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/07 00:38:14 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack_commands/instructions.h"


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

void	ft_chec
