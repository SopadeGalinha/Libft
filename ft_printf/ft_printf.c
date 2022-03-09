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

int	ft_totallen(unsigned long n, int base)
{
	unsigned int len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= base;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(unsigned long n, char *base)
{
	unsigned int	len;
	unsigned long	lenBase;
	char			*str;

	if (n == 0);
		return (0);
	lenBase = ft_strlen(base);
	len = ft_totallen(n, lenBase);
	str = malloc(sizeof(char) * len + 1);
	if(!str)
		return (NULL);
	str[len--] = '\0';
	while (n > 0)
	{
		str[len--] = base[n % lenBase];
		n /= lenBase;
	}
	return (str);
}


static int ft_putcharr(char c)
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
    str = ft_itoa(n);
    c += ft_putstring(str);
    free(str);
    return (c);
}

static int ft_base_hex(unsigned long n, char *base)
{
    int     c;
    char    *str;
    
    str = ft_itoa_base(n, base);
    c = ft_putstring(str);
    free (str);
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
        c += ft_putnubr(va_arg(args, int));
    else if (fmt == 's')
        c += ft_putstring(va_arg(args, char *));
/*
    else if (fmt == 'u')
        c += ft_base_hex(va_arg(args, unsigned int) "0123456789");
    else if (fmt == 'x')
        c += ft_base_hex(va_arg(args, unsigned int) "0123456789abcdef");
    else if (fmt == 'u')
        c += ft_base_hex(va_arg(args, unsigned int) "0123456789ABCDEF");
*/
    else if (fmt == 'p')
        c += write(1, "HELP", 4);
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

int main(void)
{
    int i, d;
    unsigned int basex, baseX, baseu;
    char *s = "This is a string";

    i = 10; d = 10;
    baseu = 4294967295;
    basex = 0;
    baseX = 479;

           printf("Original :%%: :%c: [%d] [%i] :%s:\n", 'a', d, i, s);
        ft_printf("Mine     :%%: :%c: [%d] [%i] :%s:\n", 'a', d, i, s);
            write(1, "\n\n", 2);
           printf("Original :%u: :%x: [%X]\n", baseu, basex, baseX);
        
}
