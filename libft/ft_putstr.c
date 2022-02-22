/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:43:36 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/02/15 17:43:36 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Outputs the string s to the standard output.
*/

void	ft_putstr(char const *s)
{
	while (*s)
		ft_putchar(*s++);
}
