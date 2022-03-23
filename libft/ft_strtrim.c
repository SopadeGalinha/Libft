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

/* Allocates (with malloc(3)) and returns a copy of ’s1’
** with the characters specified in ’set’ removed from the beginning
** and the end of the string.
*/

#include"libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (set[i])
	{
		if (set[i] == s1[j])
		{
			j++;
			while (s1[j] && set[i] == s1[j])
				j++;
		}
	}
}
