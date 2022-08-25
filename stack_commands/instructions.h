/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:12:31 by mabbas            #+#    #+#             */
/*   Updated: 2022/08/25 17:36:48 by mabbas           ###   ########.fr       */
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
	t_plst	**head;
	t_plst	*end;
	t_plst	**pos;
	int		upper;
	int		argc;
}	t_stack;

void	print_no_list(t_plist *a, t_plist *b, char *line);

#endif