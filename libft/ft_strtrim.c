/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:56:15 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/16 08:56:15 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***  Allocates (with malloc(3)) and returns a copy of the string
**  given as argument without whitespaces at the beginning or at
**  the end of the string. Will be considered as whitespaces the
**  following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the
**  beginning or at the end, the function returns a
**  copy of s. If the allocation fails the function returns NULL.
**  Param. #1 The string to be trimed.
**  Return value The “fresh” trimmed string or a copy of s.
*/

#include"libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
