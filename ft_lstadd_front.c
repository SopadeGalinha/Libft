/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:53:11 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/03/16 18:53:11 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Description: 
**  Adds the 'new' element at the beginning of the list.
**  Param. #1 The address of a pointer to the first link of a list.
**  Param. #2 The link to add at the beginning of the list.
*/

#include"libft.h"

t_list	ft_lstadd_front(t_list **head, t_list *new)
{
	new->next = *head;
	*head = new;
	return (*new);
}
