/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:59:45 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 14:01:09 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*returns a pointer to the last node in a list*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/* 
int main()
{
	t_list *head = ft_lstnew(ft_strdup("First node"));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Second node")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Third node")));

	t_list *last_node = ft_lstlast(head);
	printf("Last node content: %s\n", (char *)last_node->content); 
	return (0);
} */