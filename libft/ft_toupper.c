/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 08:57:54 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/16 08:57:54 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
**
** DESCRIPTION:
** convert lowercase to uppercase 
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
