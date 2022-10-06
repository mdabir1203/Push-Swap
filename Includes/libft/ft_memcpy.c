/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:29:55 by mabbas            #+#    #+#             */
/*   Updated: 2022/07/09 21:19:37 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		count;
	char		*csrc;
	char		*cdest;

	csrc = (char *)src;
	cdest = (char *)dst;
    
	count = -1;
	if ((src != NULL) || (dst != NULL))
	{
		while (++count < n)
		{
			cdest[count] = csrc[count];
		}
	}
	return (dst);
}
