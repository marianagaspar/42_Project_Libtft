/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:33:50 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:12:13 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*converts a ascii string to an integer
Logic: Skip whitespace, handle sign, convert digits */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

/*int main()
{
    const char str[] = "   -1234521232332312abc";
    int result = ft_atoi(str);
    printf("Result: %d\n", result);
    return 0;
}*/
