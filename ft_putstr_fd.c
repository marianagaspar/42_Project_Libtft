/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:53:04 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 11:55:40 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* writes the string s to the file descriptor fd */

#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
// int main(void)
// {
//     char *s = "Hello, World!";
//     ft_putstr_fd(s, STDOUT_FILENO); 
//     return 0;
// }