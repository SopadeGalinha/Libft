/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:43:55 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/15 16:43:55 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** SYNOPSIS: copy string until character found
**
** DESCRIPTION:
**  The memccpy() function copies bytes from src to dest, 
** up to and including the first occurrence of
** the character c (converted into an unsigned char), or until n bytes
** have been copied, whichever comes first.
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	i = 0;
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		if (ptr_dst[i] == (unsigned char)c)
			return (dst);
		++i;
	}
	return (NULL);
}
