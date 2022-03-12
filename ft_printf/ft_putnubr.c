/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnubr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:47:29 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/03/10 15:47:29 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int ft_putnubr(int n)
{
    char    *str;
    int     c;

    c = 0;
    str = ft_itoa(n);
    c += ft_putstring(str);
    free(str);
    return (c);
}
