/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:09:26 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/20 21:09:26 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*  DESCRIPTION:
**  Adds the node ’new’ at the end of the list.
*/
#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;

    if (!lst || !new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }    
    tmp = ft_lstlast(*lst);
    tmp->next = new;    
}
