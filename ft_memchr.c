/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:44:07 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/15 16:44:07 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
**  "The memchr() function scans the initial "n" bytes
**  of the memory area pointed to by "s" for the first instance of "c".
**  
**	Both "c" and the bytes of the memory area
**	pointed to by "s" are interpreted as unsigned char.
**
** 	The memchr() function locates the first occurrence 
**  of "c" (converted to an unsigned char) in string "s".
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	size_t			i;

	i = 0;
	b = (void *)s;
	while (i < n)
	{
		if (b[i] == (unsigned char)c)
			return (&b[i]);
		i++;
	}
	return (NULL);
}
