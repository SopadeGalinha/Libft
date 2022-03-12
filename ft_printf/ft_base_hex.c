/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:17:07 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/03/10 15:17:07 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int ft_base_hex(unsigned long n, char *base)
{
    int     c;
    char    *str;
    if (!n)
		return (ft_putstring("0"));
    str = ft_itoa_base(n, base);
    c = ft_putstring(str);
    free (str);
    return (c);
}
