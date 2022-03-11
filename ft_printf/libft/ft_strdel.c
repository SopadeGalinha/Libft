/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:22:26 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/12/14 14:22:26 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
**  Takes as a parameter the address of a string that need to be
**  freed with free(3), then sets its pointer to NULL.
*/
#include "libft.h"

void	ft_strdel(char **as)
{
	if (*as == NULL)
		return ;
	free (*as);
	*as = NULL;
}
