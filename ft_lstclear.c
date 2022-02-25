/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:47:26 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/23 16:47:26 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  DESCRIPTION:
**  Deletes and frees the given node and every
**  successor of that node, using the function ’del’ and free(3).
**  Finally, the pointer to the list must be set to NULL.
*/

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (!(lst))
        return ;
    while(*lst)
    {

    }
}
