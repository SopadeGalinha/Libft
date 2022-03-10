/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:15:15 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/03/10 15:15:15 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "../libft/libft.h"

int	ft_putpointer(unsigned long n)
{
	char	*str;
	int		c;

	c = 0;
	c += ft_putstring("0x");
	str = ft_itoa_base(n, "0123456789abcdef");
	c += ft_putstring(str);
	free (str);
	return (c);
}
