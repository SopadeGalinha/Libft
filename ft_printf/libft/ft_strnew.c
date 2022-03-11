/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:33:57 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/16 08:33:57 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. 
**  Each character of the string is initialized at
**  '\0'. If the allocation fails the function returns NULL
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * size + 1);
	if (!(new))
		return (NULL);
	ft_memset(new, '\0', (size + 1));
	return (new);
}
