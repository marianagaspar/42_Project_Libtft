/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 22:28:58 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 22:07:18 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copies len bytes from string src to string dst. The two strings may 
overlap; the copy is always done in a non-destructive manner. It returns 
a pointer to dst. 
Logic: Iterate through the memory blocks, copy each byte from src to dest */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i-- > 0)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}

/* 
int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Goodbye, World!";
    
     printf("Before memmove:\n");
     printf("str1: %s\n", str1);
     printf("str2: %s\n", str2);
    
     ft_memmove(str1, str2, 5);
    
     printf("\nAfter memmove:\n");
     printf("str1: %s\n", str1);
     printf("str2: %s\n", str2);
    
     return 0;
}
 */