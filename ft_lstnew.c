/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-conc <mda-conc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:39:29 by mda-conc          #+#    #+#             */
/*   Updated: 2026/04/22 14:00:21 by mda-conc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*used to initialize a new list node*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
/* 
int main()
{
	t_list *node = ft_lstnew(ft_strdup("Hello, World!"));

	printf("Node content: %s\n", (char *)node->content);
	return (0);
} */