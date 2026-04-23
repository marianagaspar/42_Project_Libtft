/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 10:34:49 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 13:48:31 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*checks if a character is an alphabetic character (A-Z or a-z) */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int main()
// {
//     char c1 = 'A';
//     char c2 = 'a';
//     char c3 = '1';

//     printf("%d\n", ft_isalpha(c1)); 
//     printf("%d\n", ft_isalpha(c2)); 
//     printf("%d\n", ft_isalpha(c3)); 

//     return 0;
// }
