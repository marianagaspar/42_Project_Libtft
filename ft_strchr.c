/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 11:58:49 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:34:13 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* locates the first occurrence of c
 in the string pointed to by s (including terminating null)'. 
 It returns a pointer to the located character, 
 or NULL if the character does not appear in the string. 
 Logic: Iterate through the string, compare each character with 
 the target character */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/* int main()
{
    const char str[] = "Hello, 42! I am back!";
    printf("Result: %s\n", ft_strchr(str, 'd'));
    printf("Result: %s\n", strchr(str, 'd'));
    return 0;
} */