/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 22:30:38 by mabbas            #+#    #+#             */
/*   Updated: 2022/08/08 23:42:15 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_no_list(t_plist *a, t_plist *b, char *line)
{
	t_plist	*temp;

	temp = a;
	ft_printf(1,"%s\na: ", line);
	while (temp != NULL)
	{
		ft_printf("%d, ", temp->n);
		temp = temp->next;
	}
	temp = b;
	ft_printf("\nb :");
	while (temp != NULL)
	{
		ft_printf("%d, ", temp->n);
		temp = temp->next;
	}
	ft_putchar('\n');
}

void	ppush(t_plst **src, t_plst **dst, t_plst **lastpos)
{
	t_plst	*temp;

	if (!(*src))
		return ;
	temp = *src;
	*src = (*src)->nxt;
	if (*src)
		(*src)->prev = NULL;
	if (*to)
		(*to)->prev = temp;
	else
		*lastpos = temp;
	temp->next = *dst;
	*dst = temp;
	(*dst)->prev = NULL;
}

void	sswap(t_plst **head)
{
	t_plst	*temp;

	if (!*head || (*head)->next == NULL)
		return ;
	temp = *head;
	*head = (*head)->next;
	temp->next = (*head)->next;
	(*head)->next = temp;
	(*head)->prev = NULL;
}
