/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 01:05:17 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/12/12 01:05:17 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the character c to the standard output
*/

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
