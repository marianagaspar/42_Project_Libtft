/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 11:56:47 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/23 21:48:49 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*takes a pointer to the first node of a list and a new node to 
add at the front */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int main()
{
	t_list *head = NULL;
	t_list *new_node = malloc(sizeof(t_list));
	new_node->content = "Hello, World!";
	new_node->content_size = sizeof("Hello, World!");
	new_node->next = NULL;

	ft_lstadd_front(&head, new_node);

	printf("%s\n", (char *)head->content); 

	free(new_node);
	return 0;
} */