/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:59:31 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/20 20:59:31 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Description: find last element of list
**  return the last element of the list
*/

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
    if(!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst);
}