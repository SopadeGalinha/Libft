/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printflibft.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:36:50 by jhgoncal          #+#    #+#             */
/*   Updated: 2022/03/10 15:36:50 by jhgoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H
/*
** \______________________________HEADERS_____________________________________/
*/

#include "../libft/libft.h"
#include <stdarg.h>

/*
** \_____________________________FUNCTIONS_____________________________________/
*/

int		ft_putnubr(int n);
int		ft_putstring(char const *s);
int		ft_printf(const char *fmt, ...);
int 	ft_putcharr(char c);
int		ft_putpointer(unsigned long n);
int		ft_base_hex(unsigned long n, char *base);
char	*ft_itoa_base(unsigned long n, char *base);

#endif