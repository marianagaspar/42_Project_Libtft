/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:26:58 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 11:55:30 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* writes the integer n to the file descriptor fd */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

/*int main(void)
{
    ft_putnbr_fd(12345, 1); 
    ft_putchar_fd('\n', 1); 
    ft_putnbr_fd(-67890, 1); 
    ft_putchar_fd('\n', 1); 
    ft_putnbr_fd(-2147483648, 1); 
    ft_putchar_fd('\n', 1); 
    return 0;
} */