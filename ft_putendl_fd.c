/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:04:10 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 11:55:22 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* writes the string s to the file descriptor fd followed by a newline */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

// int main(void)
// {
//     ft_putendl_fd("Hello, World!", 1); 
//     return 0;
// }