/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 10:54:43 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 09:58:03 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*checks if a character is an ASCII character (0-127) */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int main()
// {
//     char c1 = 'D';
//     char c2 = 'd';
//     char c3 = '1';
//     char c4 = '?';
//     char c5 = 146;

//     printf("%d\n", ft_isascii(c1)); 
//     printf("%d\n", ft_isascii(c2)); 
//     printf("%d\n", ft_isascii(c3)); 
//     printf("%d\n", ft_isascii(c4)); 
//     printf("%d\n", ft_isascii(c5)); 

//     return 0;
// }
