/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:28:34 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 10:01:22 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* sets the first n bytes of the memory area pointed to by s to zero */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main()
{
     int buffer[3];
     buffer[0] = 1;
     buffer[1] = 2;
     buffer[2] = 3;
     printf("after ft_bzero: %d %d %d\n", buffer[0], buffer[1], buffer[2]);
     ft_bzero(buffer, sizeof(buffer));
     printf("after ft_bzero: %d %d %d\n", buffer[0], buffer[1], buffer[2]);
     return;
}*/
