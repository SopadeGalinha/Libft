/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:14:08 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/15 19:14:08 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy strings (size-bounded)
**
** DESCRIPTION:
** 		The strcpy() and strcpy() functions copy the string src to dest (including
**	the terminating `\0' character).
** 		The strncpy() function copies at most n characters from s2 into s1.  If
**	s2 is less than n characters long, the remainder of s1 is filled with
**	`\0' characters.  Otherwise, s1 is not terminated.
*/

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n)
		dest[i++] = '\0';
	return (dest);
}
