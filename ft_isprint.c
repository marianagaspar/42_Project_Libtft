/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:01:58 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 09:57:30 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks if a given character is a printable character. The 
function returns 1 if the character is printable (ASCII value 32 to 126 ) 
and returns 0 otherwise. */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int main()
// {
//     char c1 = 'a';
//     char c2 = ' ';
//     char c3 = '?';
//     char c4 = '\t'; 

//     printf("%d\n", ft_isprint(c1)); 
//     printf("%d\n", ft_isprint(c2)); 
//     printf("%d\n", ft_isprint(c3)); 
//     printf("%d\n", ft_isprint(c4)); 

//     return 0;
// }
