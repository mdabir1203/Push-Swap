/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:12:31 by mabbas            #+#    #+#             */
/*   Updated: 2022/08/08 23:28:41 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INSTRUCTIONS_H
# define    INSTRUCTIONS_H
# define	MAX_INT_VAL 2147483648

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"
# include "limits.h"

typedef struct s_plst
{
	int		n;
	size_t	offset;
	struct s_plst *nxt;
}	t_plst;

typedef struct s_stack
{
	t_plst	*head;
	t_plst	*end;
	t_plst	**pos;
}	t_stack;

void	print_no_list(t_plist *a, t_plist *b, char *line);