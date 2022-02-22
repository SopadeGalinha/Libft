/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:51:51 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/15 17:51:51 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    DESCRIPTION:
    Allocates (with malloc(3)) and returns a “fresh” link.

    The variables content and content_size of the new link
   are initialized by a copy of the parameters of the function.
  If the parameter content is null, the variable content is initialized to
  NULL and the variable content_size is initialized to 0 even
  if the parameter content_size isn’t.
  
  The variable next is initialized to NULL. If the allocation fails, the
  function returns NULL.
*/
#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cpy;

	cpy = malloc(sizeof(t_list));
	if (!(cpy))
		return (NULL);
	cpy->content = content;
	cpy->next = NULL;
	return (cpy);
}
