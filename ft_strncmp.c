/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:07:43 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/11/19 16:07:43 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: compare strings (size-bounded)
**
** DESCRIPTION:
** 		The strcmp() and strncmp() functions lexicographically compare the null-
**	terminated strings s1 and s2.
** 		The strncmp() function compares not more than n characters.  Because
**	strncmp() is designed for comparing strings rather than binary data,
**	characters that appear after a `\0' character are not compared.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!(n))
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		if (i < (n -1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
