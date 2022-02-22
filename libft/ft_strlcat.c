/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:55:25 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/16 11:59:49 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*	DESCRIPTION:
**	strlcat() appends string src to the end of dst.
**	It will append at most dstsize strlen(dst) - 1 characters.
**	It will then NUL-terminate, unless dstsize is 0 or
**	the original dst string was longer than dstsize
**	(in practice this should not happen as it means that
**	either dstsize is incorrect or that dst is not a properstring).

**	If the src and dst strings overlap, the behavior is undefined.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
