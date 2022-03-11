/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:53:45 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/12/22 13:53:45 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
**  Description Lexicographical comparison between s1 and s2. If the 2
**  strings are identical the function returns 1, otherwise returns 0.
**  Param. #1 The first string to be compared.
**  Param. #2 The second string to be compared.
**  Return value 1 or 0 according to if the 2 strings are identical or not.
*/

#include"libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}
