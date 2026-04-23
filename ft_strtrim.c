/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:46:19 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:37:10 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*it trims the string s1 by removing all 
characters in set from the beginning and end 

Logic: Iterate through the string from both ends, skipping characters
 hat are in the set, and return a substring of the trimmed portion. */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

/* int main(void)
{
    char *s1 = "  z6vjONWhJR4Fci irRkdewL vhDbgR9udBSQGkz6 Wp1fsV4JL8wrny";
    char *set = " Wp1fsV4JL8wrny ";
    char *result = ft_strtrim(s1, set);
    printf("%s\n", result); 
    free(result);
    return 0;
} */