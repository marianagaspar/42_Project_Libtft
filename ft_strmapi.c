/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:51:28 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:35:27 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*takes a string and a function pointer as input and returns a new 
string with the function applied to each character 
logic: Iterate through the string, apply the function to each character,
 and store the result in a new string */

#include "libft.h" 

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s || !f)
	{
		return (NULL);
	}
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f((unsigned int)i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// int main(void)
// {
//     char s[] = "Hello, World!";
//     char (*f)(unsigned int, char) = [](unsigned int i, char c) {
//         if (i % 2 == 0)
//             return (char)(c - 32); 
//         else
//             return (char)(c + 32); 
//     };
//     ft_strmapi(s, f);
//     printf("%s\n", s); // Output: "hElLo, wOrLd!"
//     return 0;
// }