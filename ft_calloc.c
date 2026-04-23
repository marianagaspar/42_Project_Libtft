/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 22:42:40 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:38:59 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*uses malloc and ft_bzero to allocate and initialize memory
Confirm that the memory is properly initialized to zero and doesn't exceed 
limits of size_t
Logic: Check for zero values, check for overflow, allocate memory, 
initialize to zero */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	if (count == 0 || size == 0)
		total = 1;
	else if (count > (size_t)-1 / size)
		return (NULL);
	else
		total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
/*int main(void)
{
    size_t count = 5;
    size_t size = sizeof(int); 
    int *arr = (int *)ft_calloc(count, size);
    if (arr)
    {
        printf("Array of %zu int allocated and initialized to 0:\n", count);
        for (size_t i = 0; i < count; i++)
            printf("%d ", arr[i]);
        printf("\n");
        free(arr);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
}*/
