/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:05:31 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 14:05:04 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* takes a pointer to the head of the list and a function pointer. 
Returns a new list with the same elements as the original list, 
but with the function applied to each element */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/* int main ()
{
	t_list *head = ft_lstnew(ft_strdup("First node"));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Second node")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Third node")));

	void *to_upper(void *content)
	{
		char *str = (char *)content;
		for (size_t i = 0; str[i]; i++)
			str[i] = ft_toupper(str[i]);
		return (str);
	}

	t_list *mapped_list = ft_lstmap(head, to_upper, free);

	t_list *current = mapped_list;
	while (current != NULL)
	{
		printf("Mapped node content: %s\n", (char *)current->content);
		current = current->next;
	}

	ft_lstclear(&head, free);
	ft_lstclear(&mapped_list, free);
	return (0);
}	 */