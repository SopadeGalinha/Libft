/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:27:45 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/11/12 11:27:45 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy strings
**
** DESCRIPTION:
** 		The stpcpy() and strcpy() functions copy the string s2 to s1 (including
**	the terminating `\0' character).
*/

#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
