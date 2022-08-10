/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_build.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:05:35 by mabbas            #+#    #+#             */
/*   Updated: 2022/08/10 04:07:13 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"
#include "../libft/libft.h"

void	error_exit(void)
{
	ft_putstr_fd(ERR_GENERIC, STDERR_FILENO);
	exit (EXIT_FAILURE);
}

int	chk_only_nbr(int argc, char **argv)
{
	int	i;
	int	j;

	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-')
			j++;
		if (!ft_isdigit(argv[i][j]))
			return (EXIT_SUCCESS);
		while (ft_isdigit(argv[i][j]))
			j++;
		if (argv[i][j])
			return (EXIT_SUCCESS);
		i++;
	}
	return (EXIT_FAILURE);
}

int	chk_duplicate_nbr(t_stacklst *a, int argc)
{
	int	i;

	i = t_plst->top;
	
}

int main (void)
{
	int main()
{
	node_t n1, n2, n3;
	node_t *head;

	n1.value = 1;
	n2.value = 2;
	n3.value = 3;

	head  = &n2;
	n2.next = &n1;
	n1.next = &n3;
	n3.next = NULL;

	chk_duplicate_nbr(head);
	printlist(head);

	
	return (0);
}
}