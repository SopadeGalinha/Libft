/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 02:15:43 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/12/22 02:15:43 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
**  Applies the function f to each character of the string passed
**  as argument by giving its index as first argument to create a
**  “fresh” new string (with malloc(3)) resulting from 
**  the successive applications of f.

**  The string to map.
**  The function to apply to each character of s and its index.
**  The “fresh” string created from the successive applications of f.
*/

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!(new))
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
