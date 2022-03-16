/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:33:48 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/16 08:33:48 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (!(haystack[h] || needle[n]))
		return ((char *)haystack);
	while (haystack[h])
	{
		while (haystack[h + n] == needle[n] && len > (h + n))
			n++;
		if (!(needle[n]))
			return ((char *)haystack + h);
		n = 0;
		h++;
	}
	return (0);
}
