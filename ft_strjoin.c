/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:45:22 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:34:47 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*returns a new string which is the concatenation of s1 and s2
logic: Allocate memory for the new string, copy the contents of 
s1 and s2 to the new string, and return a pointer to the new string */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	joined = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!joined)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	return (joined);
}

/* int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "World!";
    char *result = ft_strjoin(s1, s2);
    printf("%s\n", result); 
    free(result);
    return 0;
} */