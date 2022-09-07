/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:12:31 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/07 03:55:14 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_H
# define INSTRUCTIONS_H
/**
 * @brief Define Constants  
 */
# define MAX_INTVAL	2147483648
# define ERR_GENERIC "Error\n"

/**
 * @brief Headers 
 */

# include "../libft/libft.h"
//# include "ft_printf.h"
//# include "get_next_line.h"
# include "limits.h"
# include<unistd.h>
# include<stdlib.h> // This is for error Macros
# include<stdbool.h> // This is for boolean flags



/* ------ Struct for my list of Stack ------ */

typedef struct s_list
{
	int				input;
	struct s_list	*next;
}	t_list;


/* ------ Argument Parsers ------ */

/* ------ Node Operations ------  */

t_list	*ft_new_node(int val);
void	ft_front_add(t_list **lst, t_list *nw_node);
void	ft_back_add(t_list **lst, t_list *nw_node);
void	ft_del_node(t_list **stack);
void	ft_del_stack(t_list **stack);

/* ------ Arg Checkers/Error Operations ------  */
bool	ft_stack_chk(int argc, char **argv, t_list **stack);

bool	ft_found_duplicate(t_list *stack);
void	ft_error_msg(bool error);
void	ft_range_num_chk(unsigned int res, bool *error);
void	ft_check_valid_input(char *str, bool *error);


/* ------ Size Checker and Partitioning ------ */



void	print_list(t_list	*head);

#endif