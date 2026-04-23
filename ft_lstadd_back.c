/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:00:11 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 14:04:32 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*takes a pointer to the head of a list and adds a new node at the end 
of the list*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}
/* 
int main()
{
	t_list *head = ft_lstnew(ft_strdup("First node"));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Second node")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Third node")));

	t_list *current = head;
	while (current != NULL)
	{
		printf("Node content: %s\n", (char *)current->content);
		current = current->next;
	}
	return (0);
} */