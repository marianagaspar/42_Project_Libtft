/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:46:55 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 22:21:54 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* splits the string s into an array of strings using the character c 
as a delimiter.The resulting array of strings is terminated
by a NULL pointer. */

#include "libft.h"

size_t	count_words(const char *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

void	free_all(char **split, size_t end)
{
	while (end > 0)
	{
		end--;
		free(split[end]);
	}
	free (split);
}

int	fill_array(char **split, const char *s, char c, size_t words)
{
	size_t	start;
	size_t	end;
	size_t	i;

	end = 0;
	i = 0;
	while (end < words)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		split[end] = ft_substr (s, start, i - start);
		if (!split[end])
			return (free_all(split, end), 0);
		end++;
	}
	split[end] = NULL;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	split = malloc((words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	if (!fill_array(split, s, c, words))
		return (NULL);
	return (split);
}

// int	main(void)
// {
// 	char **s = ft_split("Mariana Gaspar Kimdos", ' ');
// 	printf(">%s<",s[3]);
// }
