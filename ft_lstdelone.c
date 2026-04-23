/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:10:10 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 14:05:23 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*deletes a single node from a list*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/* 
int main()
{
	t_list *node = ft_lstnew(ft_strdup("Hello, World!"));

	printf("Node content before deletion: %s\n", (char *)node->content);
	ft_lstdelone(node, free);
	// After deletion, we cannot access node->content as it has been freed.
	return (0);
} */