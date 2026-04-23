/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 22:43:18 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:34:27 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*returns a pointer to a new string which is a duplicate of the string s1
logic: Allocate memory for the new string, copy the contents of s1 to 
the new string, and return a pointer to the new string */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s1) + 1;
	dup = (char *)malloc(len);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s1, len);
	return (dup);
}

/* int main(void)
{
    const char *original = "Hello, World!";
    char *duplicate = ft_strdup(original);
    if (duplicate)
    {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
} */