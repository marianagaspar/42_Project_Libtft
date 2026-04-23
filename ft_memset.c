/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:22:28 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:33:57 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* fills the first count bytes of the memory area pointed to by dest 
with the constant byte c. It returns a pointer to the memory area dest. 
Logic: Iterate through the memory block, fill each byte with 
the constant value c */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)dest;
	value = (unsigned char)c;
	while (count--)
	{
		*ptr++ = value;
	}
	return (dest);
}

// int main()
// {
//     char buffer[20];
//     ft_memset(buffer, 'A', sizeof(buffer) - 1);
//     buffer[sizeof(buffer) - 1] = '\0';
//     printf("Buffer after ft_memset: %s\n", buffer);
//     return 0;
// }