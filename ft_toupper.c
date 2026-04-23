/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 12:01:09 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:37:48 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* converts a lowercase letter to uppercase 

Logic: If the character is a lowercase letter, subtract the difference 
between 'a' and 'A' to convert it to uppercase. Otherwise, return the 
character as is. */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

// int main()
// {
//     int c = 'd';
//     printf("Result: %c\n", ft_toupper(c));
//     int result = ft_toupper(c);
//     return 0;
// }
