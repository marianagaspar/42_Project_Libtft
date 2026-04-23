/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:56:19 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 11:55:09 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* writes the character c to the file descriptor fd */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(void)
// {
//     ft_putchar_fd('A', 1); 
//     ft_putchar_fd('\n', 1); 
//     return 0;
// }  