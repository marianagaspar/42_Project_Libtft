/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 11:58:05 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:34:57 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* concatenates a source string onto the end of a destination string,
 with a specified length of the final string. It returns	the total length 
 of the string it tried to create, that is the initial length 
 of dest plus the length of src. 
 Logic: Iterate through the source string, copy each character to 
 the destination string, ensuring null termination within the 
 specified size */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int main()
// {
//     char dest[20] = "Hello, ";
//     char src[] = "42!";
//     size_t size = sizeof(dest);
//     printf("Result: %zu\n", ft_strlcat(dest, src, size));
//     printf("Destination: %s\n", dest);
//     size_t result = ft_strlcat(dest, src, size);
//     return 0;
// }