/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 10:50:28 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 09:58:30 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*checks if a character is an alphanumeric character (A-Z, a-z, or 0-9) */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

/*int main()
{
     char c1 = 'A';
     char c2 = 'z';
     char c3 = '1';
     char c4 = '@';

     printf("%d\n", ft_isalnum(c1));
     printf("%d\n", ft_isalnum(c2));
     printf("%d\n", ft_isalnum(c3));
     printf("%d\n", ft_isalnum(c4));

     return 0;
}*/
