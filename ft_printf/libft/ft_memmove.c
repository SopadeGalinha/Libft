/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:38:36 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/11/20 16:38:36 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
** 	    The memmove() function copies n bytes from string src to string dest.
**	 The two strings may overlap; the copy is always done in a non-destructive
**	  manner.
** The difference between memmove and memcpy it's that memmove uses a buffer
**
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)malloc(sizeof(*str) * len);
	ft_memcpy(str, src, len);
	ft_memcpy(dest, str, len);
	free(str);
	return (dest);
}
