/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:19:03 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/03/10 15:19:03 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

static int	ft_totallen(unsigned long n, int base)
{
	unsigned int len;

	len = 0;
	if (n == 0)
		len = 1;
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

	if (n == 0)
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
