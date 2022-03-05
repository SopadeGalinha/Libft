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

/*int ft_checkflag(char f)
{
    if (f == 'c' || f == 's' || f == '%'
        || f == 'd' || f == 'i' || f == 'u'
        || f == 'p' || f == 'x' || f == 'X')
        return (1);
    return (0);
}*/

int ft_putcharr(char c)
{
    write(1, &c, 1);
    return (1);
}

static int	ft_putstring(char const *s)
{
    int c;

    c = 0;
	while (*s)
    {
		ft_putchar(*s++);
        c++;
    }
    return (c);
}

static int ft_putnubr(int n)
{
    char    *str;
    int     c;

    c = 0;
    if (n >= 2147483647)
    {
        if (n != 2147483647)
            return (c);
        return (c += write(1,"2147483647", 10));
    }
    str = ft_itoa(n);
    c += ft_putstring(str);
    free(str);
    return (c);
}

int ft_conversions(char fmt, va_list args)
{
    int c;
    
    c = 0;
    if (fmt == '%')
        c += write(1, &fmt, 1);
    else if (fmt == 'c')
        c += ft_putcharr(va_arg(args, int));
    else if (fmt == 'd' || fmt == 'i')
        c += (ft_putnubr(va_arg(args, int)));
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
            if (ft_strchr("cspdiuxX%", fmt[++i]))
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
    int i = 2147483649;
    
        printf("Original :%%: :%c: :%d:\n", 'a', i);
        ft_printf("Mine     :%%: :%c: :%d:\n", 'a', i);
}
