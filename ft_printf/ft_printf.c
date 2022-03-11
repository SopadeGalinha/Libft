/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:38:25 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/16 19:38:25 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"

static int ft_conversions(char fmt, va_list args)
{
    int c;

    c = 0;
    if (fmt == '%')
        c += write(1, &fmt, 1);
    else if (fmt == 'c')
        c += ft_putcharr(va_arg(args, int));
    else if (fmt == 'd' || fmt == 'i')
        c += ft_putnubr(va_arg(args, int));
    else if (fmt == 's')
        c += ft_putstring(va_arg(args, char *));
    else if (fmt == 'u')
        c += ft_base_hex(va_arg(args, unsigned int), "0123456789");
    else if (fmt == 'x')
        c += ft_base_hex(va_arg(args, unsigned int), "0123456789abcdef");
    else if (fmt == 'X')
        c += ft_base_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
    else if (fmt == 'p')
        c += ft_putpointer(va_arg(args, unsigned long));
    return (c);
}

int ft_printf(const char *fmt, ...)
{
    int i;
    int counter;
    va_list args;

    i = -1;
    va_start(args, fmt);
    while (fmt[++i])
    {
        if (!fmt)
            return (counter);
        if (fmt[i] == '%')
            if (ft_strchr("csdipuxX%", fmt[++i]))
                counter += ft_conversions(fmt[i], args);
            else
                continue ;
        else
            counter += write(1, &fmt[i], 1);
    }
    va_end(args);
    return (counter);
}
