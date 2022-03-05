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

#include "../libft/libft.h"
#include <stdio.h>
#include <stdarg.h>

int ft_checkflag(char f)
{
    if (f == 'c' || f == 's' || f == '%'
        || f == 'd' || f == 'i' || f == 'u'
        || f == 'p' || f == 'x' || f == 'X')
        return (1);
    return (0);
}

int ft_putnubr(long int n)
{
    int c;

    c = 0;
    if (n > 2147483647 || n < -2147483648)
        return (0);
    if (n == -2147483648)
        return (c += write(1, "-2147483648", 11));
}
int ft_conversions(char fmt, va_list args)
{
    int c;
    
    c = 0;
    if (fmt == 'c' || fmt == '%')
        c += write(1, &fmt, 1);
    else if (fmt == 'd' || fmt == 'i')
        c += ft_putnubr(va_arg(args, int));
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
            if (ft_checkflag(fmt[++i]))
                counter += ft_conversions(fmt[i], args);
            else
                continue ;
        else
            counter += write(1, &fmt[i], 1);
    }
    va_end(args);
    return (counter);
}

int main(void)
{
    
    //ft_printf("abc %d\n", -2147483648);
}