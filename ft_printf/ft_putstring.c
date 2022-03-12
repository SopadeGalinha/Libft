/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:45:54 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/03/10 15:45:54 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int	ft_putstring(char const *s)
{
    int c;

    c = 0;
	if (!s)
		return (0);
	while (*s)
    {
		ft_putchar(*s++);
        c++;
    }
    return (c);
}