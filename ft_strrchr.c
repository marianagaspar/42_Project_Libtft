/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 11:59:31 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:36:58 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* locates the last occurrence of c
 in the string pointed to by s (including terminating null)'. 
 It returns a pointer to the located character, 
 or NULL if the character does not appear in the string. 
 
 Logic: Iterate through the string from the end to the beginning, 
 and return a pointer to the last occurrence of the character if 
 found, otherwise return NULL. */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			last = (char *)s;
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last);
}

/* int main()
{
    const char str[] = "Hello, 42! I am back!";
    printf("Result: %s\n", ft_strrchr(str, 'H'));
    printf("Result: %s\n", strrchr(str, 'h'));
    return 0;
}  */