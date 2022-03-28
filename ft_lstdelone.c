/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:18:50 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/23 16:18:50 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
**  DESCRIPTION: 
**  Takes as a parameter a node and frees the memory of
**  the node’s content using the function ’del’ given
**  as a parameter and free the node. The memory of
**  ’next’ must not be freed.
**
**  lst: The note to free
**  del: The adress of the function used to delete the content.
**  Return Value: None
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
