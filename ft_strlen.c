/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 10:00:28 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:35:16 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* calculates the length of a string by iterating through each character
until it reaches the null terminator ('\0'). It returns as size_t the total 
number of characters in the string, excluding the null terminator. 
logic: Iterate through the string, incrementing a counter for each 
character until the null terminator is encountered. */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

// int main()
// {
//     const char *s = "Now I am a student at 42 Lisbon.";
//     size_t length = ft_strlen(s);
//     printf("The length of the string is: %zu\n", length);
//     return 0;
// }