/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 12:00:40 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:36:48 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* locates the first occurrence of the null-terminated string needle in the
string haystack, where not more than len characters are searched. 
Characters that appear after a '\0' character are not searched. 
If needle is an empty string, haystack is returned; 
if needle occurs nowhere in haystack, NULL is returned; 
otherwise a pointer to the first character of the first occurrence 
of needle is returned. 

Logic: Iterate through the haystack string, and for each position, 
check if the needle string matches starting from that position. If 
a match is found within the specified length, return a pointer to 
that position. If no match is found, return NULL. */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const char haystack[] = "Hello, 42! I am back!";
//     const char needle[] = "42";
//     size_t len = 10;
//     char *result = ft_strnstr(haystack, needle, len);
//     return 0;
// }   