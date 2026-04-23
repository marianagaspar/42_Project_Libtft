/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 22:35:48 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:32:36 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* compares the first n bytes of the memory areas s1 and s2. 
It returns an integer less than, equal to, or greater than zero 
if the first n bytes of s1 is found, respectively, to be less than, 
to match, or be greater than the first n bytes of s2. 
The comparison is done using unsigned characters, 
so that `\200' is greater than `\0'. 
Logic: Iterate through the memory blocks, compare each byte, 
return the difference or zero if identical */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/* int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    char str3[] = "Goodbye, World!";
    
    printf("Comparing str1 and str2: %d\n", ft_memcmp(str1, str2, sizeof(str1)));
    printf("Comparing str1 and str3: %d\n", ft_memcmp(str1, str3, sizeof(str1)));
    
    return 0;
} */
