/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 11:58:22 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:35:08 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copies src to dest,It returns the total length of the string
it tried to create, that is the length of src 
logic: Iterate through the source string, copy each character 
to the destination string, ensuring null termination within the 
specified size */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// int main()
// {
//     char src[] = "Now I am a student at 42 Lisbon.";
//     char dest[10];
//     size_t result;
//     printf("Result: %zu\n", result = ft_strlcpy(dest, src, 10));
//     printf("Destination: %s\n", dest);
//     return 0;
// }