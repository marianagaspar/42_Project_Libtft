/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:03:05 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 13:59:41 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*applies the function lstdelone to each node of the list and sets
 the head pointer to NULL*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_node;

	if (lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next_node = current->next;
		ft_lstdelone(current, del);
		current = next_node;
	}
	*lst = NULL;
}

/* int main()
{
	t_list *head = ft_lstnew(ft_strdup("First node"));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Second node")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Third node")));

	ft_lstclear(&head, free);
	// After clearing, head should be set to NULL and all nodes should be freed.
	return (0);
} */