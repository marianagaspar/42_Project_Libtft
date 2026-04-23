/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:52:37 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:34:38 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*takes a string and a function pointer as input and applies the 
function to each character with its index (modifies the string)*
Logic: Iterate through the string, apply the function to each 
character with its index */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	ft_putstr(unsigned int i, char *s)
{
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

/* int	main(void)
{
	char	*str = "hello";
	
	ft_striteri(str, &ft_putstr);
	return (0);
} */
