/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:50:44 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:31:30 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*converts an integer to a alphabetic string*/

#include "libft.h"

static size_t	ft_malloc_size(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nbr;

	nbr = n;
	len = ft_malloc_size(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		str[len - 1] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (str);
}

/* int	main(void)
{
    printf("42: %s\n", ft_itoa(42));
	printf("-42: %s\n", ft_itoa(-42));
	printf("0: %s\n", ft_itoa(0));
	printf("INT_MAX: %s\n", ft_itoa(INT_MAX));
	printf("INT_MIN: %s\n", ft_itoa(INT_MIN));
    return 0;
} */

/* int main(void)
{
	char *res = ft_itoa(0);
	printf("%s\n", res);
    free(res);
} */
