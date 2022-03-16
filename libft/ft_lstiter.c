/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 21:18:04 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/03/04 21:18:04 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
**  Iterates the list and applies the function
**  ’f’ on the content of each node.
*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
