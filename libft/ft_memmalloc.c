/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:20:41 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/12/13 21:20:41 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
**  Allocates (with malloc(3)) and returns a “fresh” memory
**  area. The memory allocated is initialized to 0.
**  If the allocation fails, the function returns NULL.
*/
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new;

	new = (void *)malloc(sizeof(void) * size);
	if (!(new))
		return (NULL);
	ft_bzero(new, size);
	return (new);
}
