/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:31:14 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/03/04 16:31:14 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
**  Iterates the list and applies the function
**  ’f’ on the content of each node.
**  Creates a new list resulting of the successive applications of
**  the function ’f’. The ’del’ function is used to
**  delete the content of a node if needed.
**  lst: The address of a pointer to a node.
**  f: The address of the function used to iterate on the list.
**  del: The address of the function used to delete
**  the content of a node if needed.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *temp;

	if (!lst || !f || !del)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
    temp = new_list;
	while (lst)
    {
        temp->next = ft_lstnew(f(lst->content));
        temp = temp->next;
        if(temp == NULL)
        {
            ft_lstclear(&new_list, del);
			return (NULL);
		}
        lst = lst->next;
	}
	temp->next = NULL;
	return (new_list);
}
