/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 10:47:12 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 09:56:44 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*checks if a given character is a digit (ASCII value between '0' and '9')
The function returns 1 if the character is a digit and returns 0 
otherwise. */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int main()
// {
//     char c1 = '5';
//     char c2 = 'M;
//     char c3 = '10';

//     printf("%d\n", ft_isdigit(c1));
//     printf("%d\n", ft_isdigit(c2));
//     printf("%d\n", ft_isdigit(c3));

//     return 0;
// }
