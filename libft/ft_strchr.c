/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:46:53 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/15 17:46:53 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate character in string (first occurrence)
**
** DESCRIPTION:
** 		The strchr() function locates the first occurrence of c (converted to a
**	char) in the string pointed to by s.
**	The terminating null character is
**	considered to be part of the string; therefore if c is `\0', the func-
**	tions locate the terminating `\0'.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s) && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}
