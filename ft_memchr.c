/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 22:29:55 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:32:04 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*function that searches for a character in a memory block
Logic: Iterate through the memory block, compare each byte with the 
target character, return pointer to first match or NULL if not found */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/* int main(void)
{
    char str[] = "Hello, World!";
    int c = 'o';
    
    printf("String: %s\n", str);
    printf("Character to find: '%c'\n", c);
    
    char *result = ft_memchr(str, c, sizeof(str));
    
    if (result)
        printf("Character found at position: %ld\n", result - str);
    else
        printf("Character not found.\n");
    
    return 0;
}
 */
