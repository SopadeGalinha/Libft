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

#include "libft.h"
#include <stdio.h>
#include <stdarg.h>

int ft_printarg(const char *arg, int i, va_list lst)
{
    if (arg[i + 1] == '%')
        return (ft_putchar(arg[i + 1]));
    else if (arg[i + 1] == 'c')
        return (ft_putchar(va_arg(ap, char)));
    else if (arg[i + 1] == 's')
        return (ft_putstr(va_arg(ap, char *)));
    else if (arg[i + 1] == 'p')
        return ();
    else if (arg[i + 1] == 'i' || arg[i + 1] == 'd')
        return (ft_putnbr(va_arg(ap, int)));
/*
    else if (arg[i + 1] == 'u')
        return ();
    else if (arg[i + 1] == 'x')
        return ();
    else if (arg[i + 1] == 'X')
        return ();
*/
}

int ft_getflag(const char *fmt, int i, va_list lst)
{

}
int ft_printf(const char *fmt, ...)
{
    va_list lst;
    int     i;
    int     res;

    i = 0;
    res = 0;
    while (fmt[i])
    {
        if (ft_strchr(fmt[i] == '%'))
        {
            i++;
            if (fmt[i] && ft_strchr("cspdiuxX", fmt[i]))
            {
                res += (((int (*)())ft_getf(str[i++]))(va_arg(l, void *), 1));
                res += (ft_getflag(fmt, i, lst));
            }
        }
        write(1, &fmt[i++] 1);
        res++;
    }
}