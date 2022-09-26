/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:12:31 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/26 09:36:07 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Headers 
 */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
//# include "../libft/libft.h"
# include<limits.h>
# include<unistd.h>
# include<stdlib.h> // This is for error Macros
# include<stdbool.h> // This is for boolean flags
# include<assert.h>

/**
 * @brief Define Constants  
 */
# define MAX_INTVAL	2147483648
# define ERR_GENERIC "Error\n"

/* ------ Struct for my list of Stack ------ */

typedef struct s_stack
{
	int				input;
	int				index;
	int				val;
	int				pos_final;
	int				price_a;
	int				price_b;
	struct s_stack	*next;
}		t_stack;

	/* ------ Argument Parsers ------ */

/* ------ Node Operations ------  */

t_stack	*ft_new_node(int val);

void	ft_print_stack(t_stack *ptr);

/* ------ Arg Checkers/Error Operations ------  */
bool	ft_stack_chk(int argc, char **argv, t_stack **stack);

int		ft_found_duplicate(t_stack *stack);
void	ft_error_msg(bool error);
void	ft_range_num_chk(unsigned int res, bool *error);
void	ft_check_valid_input(char *str, bool *error);

/* ------ Size Checker and Partitioning ------ */
int		ft_list_size(t_stack *stack);
void	print_list(t_stack	*head);

#endif