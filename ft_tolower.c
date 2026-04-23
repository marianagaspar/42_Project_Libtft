/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 12:01:41 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:37:36 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* converts an uppercase letter to lowercase 

Logic: If the character is an uppercase letter, add the difference between 
'a' and 'A' to convert it to lowercase. Otherwise, return the character 
as is. */

#include "libft.h" 

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

// int main()
// {
//      char c = 'D';
// printf("Result: %c\n", ft_tolower(c));
//     char result = ft_tolower(c);
//      return 0;
// }