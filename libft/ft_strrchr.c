/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:56:52 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/16 08:56:52 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate character in string (last occurence)
**
** DESCRIPTION:
** 		The strrchr() function locates the last occurrence of c (converted to a
**	char) in the string s.  If c is `\0', strrchr() locates the terminating
**	`\0'.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*ini;

	ini = s;
	i = ft_strlen(s);
	s = (s + i);
	if (!c)
		return ((char *)s);
	while (*s != *ini && (char)c != *s)
		s--;
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}
