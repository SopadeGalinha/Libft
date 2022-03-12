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

#include "ft_printf.h"
#include "libft/libft.h"

static int writing(const char *fmt, int i)
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
			counter += writing(fmt, i);
    }
    va_end(args);
    return (counter);
}
