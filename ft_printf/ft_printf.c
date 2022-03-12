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

/*BONUSES
**  Manage any combination of the following flags: ’-0.’
** and the field minimum width under all conversions.
**  Manage all the following flags: ’#+ ’
*/

#include "ft_printf.h"
#include "libft/libft.h"

static int	b_plussign(int n)
{
	int c;
	
	c = 0;
	if (n >= 0)
		c += (ft_putcharr('+') + ft_putnubr(n));
	else
		c += ft_putnubr(n);
	return (c);
}

static int	handle_bonuses(const char *fmt, int i, va_list args)
{
	int c;

	c = 0;
	if (fmt[i] == '+')
	{
		if (ft_strchr("id", fmt[i + 1]))
				c += b_plussign(va_arg(args, int));
		else
			return (c);
	}
	else if (fmt[i] == ' ')
		c += 2;
	else if (fmt[i] == '#')
		c += 2;
	else if (fmt[i] == '-')
		c += 2;
	return (c);
}

static int ft_conversions(const char *fmt, int i, va_list args)
{
    int c;

    c = 0;
	if (ft_strchr("# +-", fmt[i]))
		c += handle_bonuses(fmt, i, args);
    else if (fmt[i] == '%')
        c += write(1, &fmt[i], 1);
    else if (fmt[i] == 'c')
        c += ft_putcharr(va_arg(args, int));
    else if (fmt[i] == 'd' || fmt[i] == 'i')
        c += ft_putnubr(va_arg(args, int));
    else if (fmt[i] == 's')
        c += ft_putstring(va_arg(args, char *));
    else if (fmt[i] == 'u')
        c += ft_base_hex(va_arg(args, unsigned int), "0123456789");
    else if (fmt[i] == 'x')
        c += ft_base_hex(va_arg(args, unsigned int), "0123456789abcdef");
    else if (fmt[i] == 'X')
        c += ft_base_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
    else if (fmt[i] == 'p')
        c += ft_putpointer(va_arg(args, unsigned long));
    return (c);
}

int ft_writing(const char *fmt, int i)
{
	int c;

	c = 0;
	if (fmt[i - 1] == '+')
		return (c);
	else
		c += write(1, &fmt[i], 1);
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
		{
            if (ft_strchr("# +-csdipuxX%", fmt[++i]))
                	counter += ft_conversions(fmt, i, args);
            else
                continue ;
		}
        else
			counter += ft_writing(fmt, i);
    }
    va_end(args);
    return (counter);
}
