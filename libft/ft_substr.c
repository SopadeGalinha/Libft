/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:56:25 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/16 08:56:25 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    Allocates (with malloc(3)) and returns a “fresh” substring
**    from the string given as argument.
** 	 - The substring begins at index "start" and is of size len. 
**	 - If start and len aren’t refering to a 
**		valid substring, the behavior is undefined. 
**	 - If the allocation fails, the function returns NULL.
**    Param. #1 The string from which create the substring.
**    Param. #2 The start index of the substring.
**    Param. #3 The size of the substring.
**    Return value: The substring.
*/

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = -1;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start > len)
		return (ft_strdup(""));
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	sub = (char *) malloc(sizeof(char) * len + 1);
	if (!(sub))
		return (0);
	if (ft_strlen(s) > start)
	{
		while (++i < len && s[start + i])
			sub[i] = s[start + i];
	}
	sub[i] = 0;
	return (sub);
}
