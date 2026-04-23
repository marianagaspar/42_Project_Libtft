/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 12:00:08 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:36:34 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* compares at most n characters of the string s1 to the string s2 If a 
difference is found, it returns the integer difference of the first 
different characters it encountered based on ASCII table
logic: Iterate through the strings, compare each character up to n 
characters, and return the difference if a mismatch is found */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/* 
int main()
{
    const char str1[] = "Hallo, 42!";
    const char str2[] = "Hello, 42!";
    size_t n = 5;
    printf("Result: %d\n", ft_strncmp(str1, str2, n));
    return 0;
} */