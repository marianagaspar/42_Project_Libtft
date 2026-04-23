/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:04:13 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 14:02:13 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*takes a pointer to the head of the list and a function pointer. 
Modifies each node of the list by applying the function to it*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* int main()
{
	t_list *head = ft_lstnew(ft_strdup("First node"));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Second node")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("Third node")));

	void print_content(void *content)
	{
		printf("%s\n", (char *)content);
	}

	ft_lstiter(head, print_content);
	return (0);
} */