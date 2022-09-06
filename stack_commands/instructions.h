/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:12:31 by mabbas            #+#    #+#             */
/*   Updated: 2022/09/07 00:33:02 by mabbas           ###   ########.fr       */
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
# include  "stdlib.h"

/**
 * @brief My list for my Nodes
 * 
 */
typedef struct s_list
{
	int				input;
	struct s_list	*next;
}	t_list;

/**
 * @brief My List for my Stack
 */
typedef struct s_stack
{
 	t_list	**head;
 	t_list	*end;
 	t_list	**pos;
 	int		upper;
 	int		argc;
}	t_stack;

/* ------ Argument Parsers ------ */

/* ------ Node Operations ------  */

t_list	*ft_new_node(int val);
void	ft_front_add(t_list **lst, t_list *nw_node);
void	ft_back_add(t_list **lst, t_list *nw_node);
void	ft_del_node(t_list **stack);
void	ft_del_stack(t_list **stack);

/* ------ Arg Checkers/Error Operations ------  */


void	print_list(t_list	*head);

#endif