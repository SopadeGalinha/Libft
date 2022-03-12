/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:45:18 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/03/12 15:45:18 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

/*BONUSES
**  Manage any combination of the following flags: ’-0.’
	and the field minimum width under all conversions.
**  Manage all the following flags: ’#+ ’.
*/

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

static int	ft_handle_bonuses(const char *fmt, int i, va_list args)
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

int ft_conversions(const char *fmt, int i, va_list args)
{
    int c;

    c = 0;
	if (ft_strchr("# +-", fmt[i]))
		c += ft_handle_bonuses(fmt, i, args);
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
