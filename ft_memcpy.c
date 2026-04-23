/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 21:26:21 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:33:36 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copies count bytes from the memory area src to the memory area dest.
The memory areas must not overlap. 
Logic: Iterate through the memory blocks, copy each byte from src to dest */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == src || count == 0)
		return (dest);
	while (count--)
	{
		*d++ = *s++;
	}
	return (dest);
}

/*int main(void)
{
       char src[] = "Hello, World!";
       char dest[20];
       printf("Source: %s\n", src);
       ft_memcpy(dest, src, sizeof(src));
       printf("Destination after memcpy: %s\n", dest);
       return 0;
}*/
