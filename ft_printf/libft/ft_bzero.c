/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:05:39 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/14 16:05:39 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <strings.h>
** SYNOPSIS: write zeroes to a byte string
**
** DESCRIPTION:
** 	The bzero() function writes 'n' zeroes bytes to the string s. If n is
**	zero, bzero() does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*new;

	new = (char *)s;
	while (n-- > 0)
		*new++ = '\0';

}
