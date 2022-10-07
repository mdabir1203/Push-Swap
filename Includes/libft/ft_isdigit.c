/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:49:04 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/31 00:55:10 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int digit)
{
	if (digit >= '0' && digit <= '9' )
		return (1);
	else
		return (0);
}

/*int main(int argc,char *argv[])
{
    char c;
    c='1';
    printf("Result when numeric character is passed: %d", ft_isdigit(c));

    c='\t';
    printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));

    c=' ';
    printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));

    c='+';
    printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));

    return 0;
}
*/