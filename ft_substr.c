/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:44:23 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:52:04 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*returns a substring of the string s, starting at index start and of 
length len

Logic: Allocate memory for the substring, copy the specified portion 
of the string, and return a pointer to the new string. */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	char	*caster;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	caster = (char *)s + start;
	if (ft_strlen(caster) < len)
	{
		i = ft_strlen(caster) + 1;
	}
	else
	{
		i = len + 1;
	}
	substr = malloc(i);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, caster, i);
	return (substr);
}

// int main(void)
// {
//     char *s = "Hello, World!";
//     char *result = ft_substr(s, 7, 5);
//     printf("%s\n", result); // Output: "World"
//     free(result);
//     return 0;
// }