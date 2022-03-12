/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:44:01 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/01/22 14:44:01 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"



void printlist (t_list *head)
{
    t_list *temp;
    temp = head;

    while(temp)
    {
        printf(" %ld\n", (long int)temp->content);
        temp = temp->next;
    }
}

t_list  *ftE_lst_find_node(t_list *head, void *content)
{
    t_list *temporary;

    temporary = head;
    while (temporary)
    {
        if (temporary->content == content)
            return (temporary);
        temporary = temporary->next;
    }
    return (NULL);
}

void  ftE_lst_insert_after_node(t_list *node_to_insert_after, t_list *new)
{
    if (!(new))
        return ;
    new->next = node_to_insert_after->next;
    node_to_insert_after->next = new;
}

int main(void)
{
t_list  n1, n2, n3;

t_list *head;
t_list *temporary;

head = NULL;
long int i = 0;

while (i < 6)
{
    temporary = ft_lstnew((long int *)i);
    ft_lstadd_front(&head, temporary);   
    i++;
}

t_list *new;

new = ftE_lst_find_node(head, (void *)3);
//printf("Found: %ld\n", (long int)new->content);
ftE_lst_insert_after_node(new, ft_lstnew((void *)75));


//printf("Found: %ld\n", (long int)new->content);
write(1,"\n\n", 2);
ft_lstclear(new->content, free);
printlist(head);


return (0);
}