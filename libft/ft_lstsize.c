/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:03:15 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/20 21:03:15 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*  DESCRIPTION:
**  Counts the number of nodes in a list.
*/

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    if(!(lst))
        return (0);
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}
