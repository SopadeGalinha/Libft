/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:56:33 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/16 08:56:33 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate a substring in a string
**
** DESCRIPTION:
** 		The strstr() function locates the first occurrence of the null-
**	terminated string s2 in the null-terminated string s1.
*/
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (!(*haystack || *needle))
		return ((char *)haystack);
	while (haystack[h])
	{
		while (haystack[h + n] == needle[n] && haystack[h + n])
			n++;
		if (!(needle[n]))
			return ((char *)haystack + h);
		n = 0;
		h++;
	}
	return (0);
}
